#include "rclcpp/rclcpp.hpp"
#include "battery_interface/msg/battery_state.hpp"

using namespace std::chrono_literals;

class Battery : public rclcpp::Node
{
public:
    Battery() : Node("battery"), battery_percent{100}
    {
        charged_time = time.now().seconds();
        publisher_ = this->create_publisher<battery_interface::msg::BatteryState>("/battery_state", 10);
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

    rclcpp::Publisher<battery_interface::msg::BatteryState>::SharedPtr publisher_;
    battery_interface::msg::BatteryState msg;
    rclcpp::TimerBase::SharedPtr timer_;
    size_t battery_percent;
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