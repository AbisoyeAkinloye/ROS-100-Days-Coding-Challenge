#include "rclcpp/rclcpp.hpp"
#include "battery_interface/msg/battery_state.hpp"
#include "battery_interface/srv/set_led.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;

class Battery : public rclcpp::Node
{
public:
    Battery() : Node("battery"), battery_percent {100}
    {
        charged_time = time.now().seconds();
        publisher_ = this->create_publisher<battery_interface::msg::BatteryState>("/battery_state", 10);
        server_ = this->create_service<battery_interface::srv::SetLed>("/set_led", std::bind(&Battery::setLED, this, _1,_2));
        timer_ = this->create_wall_timer(1s, std::bind(&Battery::getBatteryStatus, this));
        RCLCPP_INFO(this->get_logger(), "Battery has been connected. %d%% fully charged", battery_percent);
    }

private:
    void getBatteryStatus()
    {
        double time_now = time.now().seconds();
        if (battery_percent == 100)
        {
            if (time_now - charged_time > 60.0)
            {
                battery_percent = 50;
                RCLCPP_INFO(this->get_logger(), "Battery percentage reduced to %d%%", battery_percent);
                charged_time = time_now;
            }
        }
        else if (battery_percent == 50)
        {
            if (time_now - charged_time > 120.0)
            {
                battery_percent = 1;
                RCLCPP_INFO(this->get_logger(), "Low Battery: %d%%", battery_percent);
                charged_time = time_now;
            }
        }
        else
        {
            if (time_now - charged_time > 4.0)
            {
                battery_percent = 0;
                RCLCPP_WARN(this->get_logger(), "Battery empty!!! Shutting down...");
            }
        }

        msg.battery_state = battery_percent;
        publisher_->publish(msg);
    }
    
    void setLED(const battery_interface::srv::SetLed::Request request, const battery_interface::srv::SetLed::Response response){
        if (battery_percent == 100 && request.battery_state == battery_percent){
            // std::vector<int> full{ 0, 0, 1 };
            RCLCPP_INFO(this->get_logger(), "********Incoming request:**********\nbattery percent: %d", request.battery_state);
            // response.led_state = full;
            RCLCPP_INFO(this->get_logger(), "Led panel indicates: %d \n The battery is fully charged.", response.led_state);
        }
    }
    
    rclcpp::Publisher<battery_interface::msg::BatteryState>::SharedPtr publisher_;
    rclcpp::Service<battery_interface::srv::SetLed>::SharedPtr server_;
    battery_interface::msg::BatteryState msg;
    rclcpp::TimerBase::SharedPtr timer_;
    int battery_percent;
    rclcpp::Clock time;
    double charged_time;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Battery>());
    rclcpp::shutdown();
    return 0;
}