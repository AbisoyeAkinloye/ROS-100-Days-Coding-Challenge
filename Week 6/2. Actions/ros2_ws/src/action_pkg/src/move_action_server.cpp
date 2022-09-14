#include "rclcpp/rclcpp.hpp"
#include "action_pkg/action/move.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "geometry_msgs/msg/twist.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class MoveActionServer : public rclcpp::Node
{
public:
    // type alias
    using Move = action_pkg::action::Move;
    using GoalHandleMove = rclcpp_action::ServerGoalHandle<Move>;

    explicit MoveActionServer(const rclcpp::NodeOptions& options = rclcpp::NodeOptions()) : Node("move_action_server", options)
    {
        velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        
        this->move_action_ = rclcpp_action::create_server<Move>(
            this,
            "move_action",
            std::bind(&MoveActionServer::handle_goal, this, _1, _2),
            std::bind(&MoveActionServer::handle_cancel, this, _1),
            std::bind(&MoveActionServer::handle_accepted, this, _1)
        );
    }
    
private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
    rclcpp_action::Server<Move>::SharedPtr move_action_;

    // callback for handling goal
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &uuid, const Move::Goal::SharedPtr goal)
    {
        RCLCPP_INFO(this->get_logger(), "Received goal request with distance %d", goal->distance);
        (void)uuid;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    // callback execution cancel
    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleMove> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    // callback to accept a new goal and start processing it
    void handle_accepted(const std::shared_ptr<GoalHandleMove> goal_handle)
    {
        std::thread{std::bind(&MoveActionServer::execute, this, _1), goal_handle}.detach();
    };

    // continue to process and update the action
    void execute(const std::shared_ptr<GoalHandleMove> goal_handle)
    {
        double speed = 2.0;
        bool isForward = true;
        RCLCPP_INFO(this->get_logger(), "Executing goal...");
        rclcpp::Rate rate(5);
        const auto goal = goal_handle->get_goal();
        auto feedback = std::make_shared<Move::Feedback>();
        auto &feedback_message = feedback->current_distance;
        auto result = std::make_shared<Move::Result>();

        geometry_msgs::msg::Twist speed_msg;

        if (isForward)
            speed_msg.linear.x = abs(speed);
        else
            speed_msg.linear.x = -abs(speed);

        rclcpp::Clock time;
        double t0 = time.now().seconds();
        double current_distance = 0;

        while (current_distance < goal->distance && rclcpp::ok())
        {
            if (goal_handle->is_canceling())
            {
                result->status = feedback_message;
                goal_handle->canceled(result);
                RCLCPP_INFO(this->get_logger(), "Goal canceled...");
            }

            // update feedback
            double t1 = time.now().seconds();
            current_distance = speed_msg.linear.x * (t1 - t0);
            feedback_message = current_distance;
            velocity_publisher_->publish(speed_msg);
            goal_handle->publish_feedback(feedback);
            RCLCPP_INFO(this->get_logger(), "Publish feedback");
            rate.sleep();
        }

        // check if goal is done
        if(rclcpp::ok()){
            result->status = "Just reached the goal! Succeeded!!!";
            speed_msg.linear.x = 0.0;
            velocity_publisher_->publish(speed_msg);
            goal_handle->succeed(result);
        }
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MoveActionServer>());
    rclcpp::shutdown();
    return 0;
}