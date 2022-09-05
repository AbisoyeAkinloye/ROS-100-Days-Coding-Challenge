#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int64.hpp"

using namespace std::chrono_literals;

class NumberPublisher : public rclcpp::Node
{
public:
    NumberPublisher() : Node("number_publisher")
    {
        this->declare_parameter("number", 1);
        number = this->get_parameter("number").as_int();

        publisher_ = this->create_publisher<example_interfaces::msg::Int64>("/number", 10);
        timer_ = this->create_wall_timer(1s, std::bind(&NumberPublisher::publish_counter, this));

        RCLCPP_INFO(this->get_logger(), "The number counter has started from %d.",number);
    }

private:
    void publish_counter()
    {
        msg.data = number;
        number++;
        publisher_->publish(msg);
    }

    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    example_interfaces::msg::Int64 msg;
    int number;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<NumberPublisher>());
    rclcpp::shutdown();
    return 0;
}