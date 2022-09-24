/*
Turtle rotates having specified the angular speed and angle of rotation in clockwise or anticlockwise direction.

Author: Abisoye Akinloye
Date: September 2022
*/

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

#include "motion_types/utils.h"

class Rotation : public rclcpp::Node
{
public:
    Rotation() : Node("rotation")
    {
        velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        timer_ = this->create_wall_timer(std::chrono::nanoseconds(200), std::bind(&Rotation::rotate, this));
        Rotation::set_params();
    }

private:
    void set_params()
    {
        std::cout << "Enter angle of rotation (degree): ";
        std::cin >> angle;
        angle_rad = degree2radian(angle);

        std::cout << "Enter an angular speed (rad/s): ";
        std::cin >> angular_speed;

        std::cout << "Enter [1] for CCW rotation and [0] for CW rotation: ";
        std::cin >> isCCW;

        t0 = time.now().seconds();
    }

    void rotate()
    {
        t1 = time.now().seconds();
        dt = t1 - t0;
        current_angle = angular_speed * dt;

        if (current_angle < angle_rad)
        {
            if (isCCW)
                vel_msg.angular.z = abs(angular_speed);
            else
                vel_msg.angular.z = -abs(angular_speed);
        }
        else
        {
            vel_msg.angular.z = 0.0;
            RCLCPP_INFO(this->get_logger(), "Finished rotation");
            timer_->cancel();
        }
        velocity_publisher_->publish(vel_msg);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    geometry_msgs::msg::Twist vel_msg;
    float angular_speed, angle, angle_rad, current_angle;
    rclcpp::Clock time;
    bool isCCW;
    int t0, t1, dt;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Rotation>());
    rclcpp::shutdown();

    return 0;
}