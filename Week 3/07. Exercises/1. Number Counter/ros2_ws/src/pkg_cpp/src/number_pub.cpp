#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int64.hpp"

using namespace std::chrono_literals;

class NumberPub : public rclcpp::Node
{
public:
    NumberPub() : Node("number_publisher")
    {
        publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number", 10);
        timer_ = this->create_wall_timer(1s, std::bind(&NumberPub::counter, this));
        RCLCPP_INFO(this->get_logger(), "Initial count: %d",count);
    }

private:
    void counter()
    {
        auto msg = example_interfaces::msg::Int64();
        msg.data = count++;
        publisher_->publish(msg);
    }
    int count{};
    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char** argv){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<NumberPub>());
    rclcpp::shutdown();

    return 0;
}