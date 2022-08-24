#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"

class Talker : public rclcpp::Node
{
public:
    Talker();

private:
    void talk();
    rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    // std::string name_ {"Abisoye"};
};
