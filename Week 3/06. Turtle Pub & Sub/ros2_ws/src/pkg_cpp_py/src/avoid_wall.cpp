#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

class AvoidWall : public rclcpp::Node
{
public:
    AvoidWall() : Node("avoid_wall")
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        timer_ = this->create_wall_timer(1s, std::bind(&AvoidWall::wall_avoidance, this));
        subscriber_ = this->create_subscription<turtlesim::msg::Pose>("turtle1/pose", 10, std::bind(&AvoidWall::turtle_position, this, _1));
        RCLCPP_INFO(this->get_logger(), "Turtle will move and avoid the wall whenever it is close by...");
    }

private:
    void turtle_position(const turtlesim::msg::Pose::SharedPtr position)
    {
        x_position = position->x;
        y_position = position->y;
    }

    void wall_avoidance()
    {
        auto axis = geometry_msgs::msg::Twist();
        axis.linear.x = 2.0;

        if (x_position <= 2.0 || y_position <= 2.0 || x_position >= 8.0 || y_position >= 8.0)
        {
            axis.angular.z = 22/7;
        }
        else
        {
            axis.angular.z = 0.0;
        }
        publisher_->publish(axis);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscriber_;
    rclcpp::TimerBase::SharedPtr timer_;
    float x_position, y_position;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AvoidWall>());
    rclcpp::shutdown();
    return 0;
}