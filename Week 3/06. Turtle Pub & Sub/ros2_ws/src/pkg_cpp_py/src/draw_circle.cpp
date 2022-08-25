#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

class DrawCircle : public rclcpp::Node
{
public:
    DrawCircle() : Node("draw_a_circle")
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        timer_ = this->create_wall_timer(1s, std::bind(&DrawCircle::draw, this));
        RCLCPP_INFO(this->get_logger(), "Started drawing a circle continously...");
    }

private:
    void draw()
    {
        auto axis = geometry_msgs::msg::Twist();
        axis.linear.x = 2.0;
        axis.angular.z = 1.8;
        publisher_->publish(axis);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DrawCircle>());
    rclcpp::shutdown();

    return 0;
}