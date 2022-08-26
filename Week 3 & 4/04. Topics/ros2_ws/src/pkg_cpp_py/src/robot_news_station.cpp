#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"

using namespace std::chrono_literals;

class RobotNewsStation : public rclcpp::Node
{
public:
    RobotNewsStation() : Node("robot_news_station")
    {
        publisher_ = this->create_publisher<example_interfaces::msg::String>("robot_news", 10);
        timer_ = this->create_wall_timer(1s, std::bind(&RobotNewsStation::publish_news, this));
        RCLCPP_INFO(this->get_logger(), "Robot news has been started.");
    }

private:
    void publish_news()
    {
        auto msg = example_interfaces::msg::String();
        msg.data = std::string("Hi, this is ") + robot_name_ + std::string(" from the Robot news station");
        publisher_->publish(msg);
    }
    std::string robot_name_ {"Loybot"};
    rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RobotNewsStation>());
    rclcpp::shutdown();
    return 0;
}