#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/battery_state.hpp"

using namespace std::chrono_literals;

class Battery : public rclcpp::Node
{
public:
    Battery() : Node("battery")
    {
        publisher_ = this->create_publisher<custom_interfaces::msg::BatteryState>("/battery_state", 10);
        timer_ = this->create_wall_timer(1s, std::bind(&Battery::getBatteryStatus, this));
        RCLCPP_INFO(this->get_logger(), "Battery has been connected.");
    }

private:
    void getBatteryStatus(){
        msg.battery_state = battery_perecent;
        RCLCPP_INFO(this->get_logger(), "Battery has %d %",msg.battery_state);
        publisher_->publish(msg);
    }

    rclcpp::Publisher<custom_interfaces::msg::BatteryState>::SharedPtr publisher_;
    custom_interfaces::msg::BatteryState msg;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Clock time;
    size_t battery_perecent{100};
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Battery>());
    rclcpp::shutdown();
    return 0;
}