#include "rclcpp/rclcpp.hpp"
#include "battery_interface/msg/battery_state.hpp"

using std::placeholders::_1;

class LED : public rclcpp::Node
{
public:
    LED() : Node("led_panel")
    {
        subscriber_ = this->create_subscription<battery_interface::msg::BatteryState>("/battery_state", 10, std::bind(&LED::checkBatteryStatus, this, _1));
        RCLCPP_INFO(this->get_logger(), "Led node has started");
    }

private:
    void checkBatteryStatus(const battery_interface::msg::BatteryState::SharedPtr msg)
    {
        if (msg->battery_state == 0)
        {
            RCLCPP_WARN(this->get_logger(), "Battery empty, please charge!!!");
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "The battery status is %d%%", msg->battery_state);
        }
    }
    rclcpp::Subscription<battery_interface::msg::BatteryState>::SharedPtr subscriber_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<LED>());
    rclcpp::shutdown();
    return 0;
}