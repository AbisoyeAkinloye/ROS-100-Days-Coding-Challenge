#include "rclcpp/rclcpp.hpp"
#include "pkg_cpp_py/turtle_controller.hpp"

AvoidWall::AvoidWall() : Node("avoid_wall")
{
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
    subscriber_ = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose", 10, std::bind(&AvoidWall::cmd_velocity_callback, this, _1));
}

void AvoidWall::cmd_velocity_callback(const turtlesim::msg::Pose::SharedPtr pose)
{
    cmd_vel.linear.x = 2.0;
    cmd_vel.linear.y = 0.0;

    if (pose->x < 1.2 || pose->x > 9.8 || pose->y < 1.2 || pose->y > 9.8)
    {
        RCLCPP_INFO(this->get_logger(), "Close to the wall, now turning...");
        cmd_vel.angular.z = 1.8;
    }
    else
        cmd_vel.angular.z = 0.0;

    publisher_->publish(cmd_vel);
}

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AvoidWall>());
    rclcpp::shutdown();
    return 0;
}