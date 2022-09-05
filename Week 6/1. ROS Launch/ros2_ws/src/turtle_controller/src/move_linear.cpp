#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"

using std::placeholders::_1;

class MoveLinear : public rclcpp::Node
{
public:
    MoveLinear() : Node("move_turtle_linearly")
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        subscriber_ = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose", 10, std::bind(&MoveLinear::publish_vel, this, _1));
        RCLCPP_INFO(this->get_logger(), "Ready to move the turtle linearly");
        std::cin >> name;
        RCLCPP_INFO(this->get_logger(), "Robot name is: %s", name.c_str());
    }

private:
    void publish_vel(const turtlesim::msg::Pose::SharedPtr pose)
    {
        
        if (pose->x < 1.0 || pose->x > 10.0){
            speed.linear.x = 2.0;
            speed.angular.z = 1.8;
        } else {
            speed.angular.z = 0.0;
            speed.linear.x = 2.0;
        }
        publisher_->publish(speed);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscriber_;
    rclcpp::TimerBase::SharedPtr timer_;
    geometry_msgs::msg::Twist speed;
    std::string name;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MoveLinear>());
    rclcpp::shutdown();
    return 0;
}