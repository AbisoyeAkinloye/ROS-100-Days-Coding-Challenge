#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"

using std::placeholders::_1;

class TransistorRadio : public rclcpp::Node
{
public:
    TransistorRadio() : Node("transistor_radio")
    {
        subscriber_ = this->create_subscription<example_interfaces::msg::String>("robot_news", 10, std::bind(&TransistorRadio::robot_news_callback, this,_1));
    }

private:
    void robot_news_callback(const example_interfaces::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "%s", msg->data.c_str());
    }
    rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr subscriber_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TransistorRadio>());
    rclcpp::shutdown();
    return 0;
}