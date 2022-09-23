/*
Turtle to move linearly based on specified direction (forward or backward), speed, and distance.

Author: Abisoye Akinloye
Date: September 2022
*/

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

class MoveLinearly : public rclcpp::Node
{
public:
    MoveLinearly() : Node("linear_movement")
    {
        MoveLinearly::set_movement_params();
        velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&MoveLinearly::move_linear, this));
    }

private:
    void set_movement_params()
    {
        std::cout << "Enter the desired distance (m): ";
        std::cin >> distance;
        std::cout << "Enter the desired velocity (m/s): ";
        std::cin >> velocity;
        std::cout << "Enter [1] for forward and [0] for backward direction: ";
        std::cin >> isForward;

        t0 = time.now().seconds();
    }

    void move_linear()
    {
        t1 = time.now().seconds();
        int dt = t1 - t0;
        RCLCPP_INFO(this->get_logger(), "Change in time: %i", dt);

        displacement = velocity * dt;
        if (displacement < distance)
        {
            if (isForward)
                vel_msg.linear.x = abs(velocity);
            else
                vel_msg.linear.x = -abs(velocity);
        }
        else
        {
            vel_msg.angular.z = 0.0;
            RCLCPP_INFO(this->get_logger(), "Specified distance of %.1f reached.", distance);
            timer_->cancel();
        }

        velocity_publisher_->publish(vel_msg);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    geometry_msgs::msg::Twist vel_msg;
    rclcpp::Clock time;
    float distance, displacement, velocity;
    bool isForward; int t1, t0;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MoveLinearly>());
    rclcpp::shutdown();

    return 0;
}