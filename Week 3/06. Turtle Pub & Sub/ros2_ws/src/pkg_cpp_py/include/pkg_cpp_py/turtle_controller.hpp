#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"

using std::placeholders::_1;

class AvoidWall : public rclcpp::Node
{
public:
    AvoidWall();

private:
    void cmd_velocity_callback(const turtlesim::msg::Pose::SharedPtr pose);

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscriber_;
    geometry_msgs::msg::Twist cmd_vel;
};