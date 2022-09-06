#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"

using namespace std::chrono_literals;

class MoveLinearly : public rclcpp::Node
{
public:
    MoveLinearly() : Node("move_linear")
    {
        specify_params();
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        RCLCPP_INFO(this->get_logger(), "The robot will start moving on a straight line.");
        timer_ = this->create_wall_timer(1s, std::bind(&MoveLinearly::move_linearly, this));
    }

private:
    void specify_params()
    {
        std::cout << "Enter desired distance: ";
        std::cin >> distance;

        std::cout << "Enter desired speed: ";
        std::cin >> speed;

        std::cout << "Direction [1] forward [0] backward: ";
        std::cin >> isForward;

        t0 = time.now().seconds();
    }

    void move_linearly()
    {
        t1 = time.now().seconds();
        dt = t1 - t0;

        displacement = speed * dt;

        if (displacement <= distance)
        {
            isForward ? cmd_vel.linear.x = abs(speed) : cmd_vel.linear.x = -abs(speed);
        }
        else
        {
            cmd_vel.linear.x = 0.0;
        }
        publisher_->publish(cmd_vel);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    geometry_msgs::msg::Twist cmd_vel;
    rclcpp::Clock time;
    int t0, t1, dt, isForward;
    double speed, distance, displacement;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MoveLinearly>());
    rclcpp::shutdown();

    return 0;
}