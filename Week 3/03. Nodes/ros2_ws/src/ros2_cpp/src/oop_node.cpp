#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

class MyNode : public rclcpp::Node
{
public:
    MyNode() : Node("cpp_node"), counter_ {0}
    {
        RCLCPP_INFO(this->get_logger(), "Hello from C++ OOP node");
        timer_ = this->create_wall_timer(1s, std::bind(&MyNode::timer_callback, this));
    }

private:
    void timer_callback()
    {
        counter_ ++;
        RCLCPP_INFO(this->get_logger(), "Hello %d",counter_);
    }

    rclcpp::TimerBase::SharedPtr timer_;
    int counter_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MyNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}