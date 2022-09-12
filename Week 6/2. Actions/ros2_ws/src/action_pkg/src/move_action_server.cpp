#include "rclcpp/rclcpp.hpp"
#include "action_pkg/action/move.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "geometry_msgs/msg/twist.hpp"

using std::placeholders::_1;

class MoveActionServer : public rclcpp::Node
{
public:
    MoveActionServer() : Node("move_action_server")
    {
    }
    // type alias
    using Move = action_pkg::action::Move;
    using GoalHandleMove = rclcpp_action::ServerGoalHandle<Move>;

private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
    rclcpp_action::Server<Move>::SharedPtr move_action_;

    // callback for handling goal
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID& uuid, const Move::Goal::SharedPtr goal){
        RCLCPP_INFO(this->get_logger(), "Received goal request with distance %d", goal->distance);
        (void)uuid;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    // callback execution cancel
    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleMove> goal_handle){
        RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
        (void) goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    // callback to accept a new goal  
    void handle_accepted();
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MoveActionServer>());
    rclcpp::shutdown();
    return 0;
}