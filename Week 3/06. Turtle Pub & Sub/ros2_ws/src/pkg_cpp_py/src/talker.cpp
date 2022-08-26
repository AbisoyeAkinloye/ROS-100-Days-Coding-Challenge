#include "rclcpp/rclcpp.hpp"
#include "pkg_cpp_py/talker.hpp"

using namespace std::chrono_literals;

Talker::Talker() : Node ("talker"){
    publisher_ = this->create_publisher<example_interfaces::msg::String>("chatter",10);
    timer_ = this->create_wall_timer(1s, std::bind(&Talker::talk, this));
    RCLCPP_INFO(this->get_logger(), "Talking...");
}

void Talker::talk(){
    auto msg = example_interfaces::msg::String();
    msg.data = std::string("Hi, I am ") + Talker::fullname_ + std::string(". I'm a Robotic Engineer.");
    publisher_->publish(msg);
}

int main(int argc, char** argv){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Talker>());
    rclcpp::shutdown();
    return 0;
}