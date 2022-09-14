#include "rclcpp/rclcpp.hpp"
#include "action_pkg/action/move.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

using namespace std::placeholders;

class MoveActionClient : public rclcpp::Node
{
public:
    // type aliases
    using Move = action_pkg::action::Move;
    using GoalHandleMove = rclcpp_action::ClientGoalHandle<Move>;

    explicit MoveActionClient(const rclcpp::NodeOptions &options = rclcpp::NodeOptions()) : Node("move_action_client", options)
    {
        move_client_ = rclcpp_action::create_client<Move>(this, "move_action");

        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&MoveActionClient::send_goal, this));
    }

    void send_goal()
    {
        timer_->cancel();

        if (!move_client_->wait_for_action_server())
        {
            RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
            rclcpp::shutdown();
        }

        auto goal_msg = Move::Goal();
        goal_msg.distance = 4;

        RCLCPP_INFO(this->get_logger(), "Sending goal...");

        auto send_goal_options = rclcpp_action::Client<Move>::SendGoalOptions();

        send_goal_options.goal_response_callback = std::bind(&MoveActionClient::goal_response_callback, this, _1);
        send_goal_options.feedback_callback = std::bind(&MoveActionClient::feedback_callback, this, _1, _2);
        send_goal_options.result_callback = std::bind(&MoveActionClient::result_callback, this, _1);

        move_client_->async_send_goal(goal_msg, send_goal_options);
    }

private:
    void goal_response_callback(std::shared_future<GoalHandleMove::SharedPtr> future)
    {
        auto goal_handle = future.get();
        if (!goal_handle)
            RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
        else
            RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
    }

    void feedback_callback(GoalHandleMove::SharedPtr, const std::shared_ptr<const Move::Feedback> feedback)
    {
        RCLCPP_INFO(this->get_logger(), "The current distance is %d", feedback->current_distance);
    }

    void result_callback(const GoalHandleMove::WrappedResult &result)
    {
        switch (result.code)
        {
        case rclcpp_action::ResultCode::SUCCEEDED:
            RCLCPP_INFO(this->get_logger(), "%s", result.result->status.c_str());
            break;
        case rclcpp_action::ResultCode::ABORTED:
            RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
            break;
        case rclcpp_action::ResultCode::CANCELED:
            RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
            break;
        default:
            RCLCPP_ERROR(this->get_logger(), "Unknown result code");
            break;
        }
    }

    rclcpp_action::Client<Move>::SharedPtr move_client_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MoveActionClient>());
    rclcpp::shutdown();
    return 0;
}
