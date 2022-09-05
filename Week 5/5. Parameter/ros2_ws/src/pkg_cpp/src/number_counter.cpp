#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int64.hpp"

using std::placeholders::_1;

class NumberCounter : public rclcpp::Node
{
public:
    NumberCounter() : Node("number_publisher")
    {
        subscriber_ = this->create_subscription<example_interfaces::msg::Int64>("/number", 10, std::bind(&NumberCounter::counter_cb, this, _1));

        RCLCPP_INFO(this->get_logger(), "The number counter has started.");
    }

private:
    void counter_cb(const example_interfaces::msg::Int64::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "Counter: %d", msg->data);
    }

    rclcpp::Subscription<example_interfaces::msg::Int64>::SharedPtr subscriber_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<NumberCounter>());
    rclcpp::shutdown();
    return 0;
}