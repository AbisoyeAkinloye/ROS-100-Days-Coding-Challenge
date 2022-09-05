#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"

using std::placeholders::_1;

class AvoidWall : public rclcpp::Node
{
public:
    AvoidWall() : Node("avoid_wall")
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        subscriber_ = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose", 10, std::bind(&AvoidWall::publish_vel, this, _1));
        RCLCPP_INFO(this->get_logger(), "Ready to move the turtle linearly");
    }

private:
    void publish_vel(const turtlesim::msg::Pose::SharedPtr pose)
    {
        speed.linear.y = 0.0;
        
        if (pose->x < 1.0 || pose->x > 10.0 || pose->y < 1.0 || pose->y > 10.0){
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
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AvoidWall>());
    rclcpp::shutdown();
    return 0;
}