#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class AddTwoIntsServerOOP : public rclcpp::Node
{
public:
    AddTwoIntsServerOOP() : Node("add_two_ints_server")
    {
        server_ = this->create_service<example_interfaces::srv::AddTwoInts>("add_two_ints", std::bind(&AddTwoIntsServerOOP::add_two_ints_cb, this, _1, _2));
        RCLCPP_INFO(this->get_logger(), "Server is up and running...");
    }

private:
    void add_two_ints_cb(const example_interfaces::srv::AddTwoInts::Request::SharedPtr request, const example_interfaces::srv::AddTwoInts::Response::SharedPtr response)
    {
        response->sum = request->a + request->b;
        RCLCPP_INFO(this->get_logger(), "Incoming request:\na: %d, b: %d", request->a, request->b);
        RCLCPP_INFO(this->get_logger(),"%d + %d = %d", request->a,request->b,response->sum);
    }
    rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr server_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AddTwoIntsServerOOP>());
    rclcpp::shutdown();

    return 0;
}