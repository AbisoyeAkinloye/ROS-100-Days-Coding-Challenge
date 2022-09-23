/*
Turtle rotate to form spiral shape. This type of motion has its application in vacuum cleaner robot.

Author: Abisoye Akinloye.
Date: September 2022.
*/

#include "rclcpp/rclcpp.hpp"
#include "turtlesim/msg/pose.hpp"
#include "geometry_msgs/msg/twist.hpp"

class SpiralMotion : public rclcpp::Node
{
public:
    SpiralMotion() : Node("spiral_rotation")
    {
        velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        pose_subscriber_ = this->create_subscription<turtlesim::msg::Pose>("turtle1/pose", 10, std::bind(&SpiralMotion::pose_callback, this, std::placeholders::_1));
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&SpiralMotion::rotate_spirally, this));
        RCLCPP_INFO(this->get_logger(), "Turtle will start rotating spirally.");
    }

private:
    void pose_callback(const turtlesim::msg::Pose::SharedPtr pose)
    {
        pose_x = pose->x;
        pose_y = pose->y;

        if (pose_y > 9.8 && !timer_->is_canceled())
            RCLCPP_WARN(this->get_logger(), "About to reach the set limit.");
    }

    void rotate_spirally()
    {
        vel_msg.linear.x = radius;

        if (pose_x < 10.0 && pose_y < 10.0)
        {
            vel_msg.angular.z = M_PI;
            radius += 0.2;
        }
        else
        {
            vel_msg.angular.z = 0.0;
            vel_msg.linear.x = 0.0;
            RCLCPP_WARN(this->get_logger(), "Spiral rotation done.");
            timer_->cancel();
        }

        velocity_publisher_->publish(vel_msg);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr pose_subscriber_;
    geometry_msgs::msg::Twist vel_msg;
    rclcpp::TimerBase::SharedPtr timer_;
    float radius{2.0};
    float pose_x, pose_y;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SpiralMotion>());
    rclcpp::shutdown();

    return 0;
}