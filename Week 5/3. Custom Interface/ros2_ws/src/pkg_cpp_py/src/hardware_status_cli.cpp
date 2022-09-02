#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/hardware_status.hpp"

using std::placeholders::_1;

class HardwareStatusClient : public rclcpp::Node
{
public:
    HardwareStatusClient() : Node("hardware_status_client")
    {
        subscriber_ = this->create_subscription<custom_interfaces::msg::HardwareStatus>("hardware_status", 10, std::bind(&HardwareStatusClient::hardware_status_cb, this, _1));
        RCLCPP_INFO(this->get_logger(), "Subscriber node has started");
    }

private:
    void hardware_status_cb(const custom_interfaces::msg::HardwareStatus::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "\n Temperature: %i \n Message: %s", msg->temperature,msg->message.c_str());
    }
    rclcpp::Subscription<custom_interfaces::msg::HardwareStatus>::SharedPtr subscriber_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<HardwareStatusClient>());
    rclcpp::shutdown();
    return 0;
}