#include "rclcpp/rclcpp.hpp"
#include "led_indicator/msg/battery_state.hpp"

class LED : public rclcpp::Node
{
public:
private:
};

int main(int argc, char *argv[]){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<LED>());
    rclcpp::shutdown();
    return 0;
}