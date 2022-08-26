#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int64.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

class NumberCounter : public rclcpp::Node
{
public:
    NumberCounter() : Node("number_counter")
    {
        subscriber_ = this->create_subscription<example_interfaces::msg::Int64>("number", 10, std::bind(&NumberCounter::number_callback, this, _1));
        timer_ = this->create_wall_timer(1s, std::bind(&NumberCounter::counter, this));
        publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number_count", 10);
        RCLCPP_INFO(this->get_logger(), "Initial count: %d", count);
    }

private:
    void counter()
    {
        auto msg = example_interfaces::msg::Int64();
        msg.data = count++;
        publisher_->publish(msg);
    }

    void number_callback(const example_interfaces::msg::Int64::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "%d", msg->data);
    }
    int count{};
    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr publisher_;
    rclcpp::Subscription<example_interfaces::msg::Int64>::SharedPtr subscriber_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<NumberCounter>());
    rclcpp::shutdown();
    return 0;
}