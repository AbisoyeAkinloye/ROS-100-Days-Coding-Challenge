#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

using namespace std::chrono_literals;

class AddTwoIntsOOP : public rclcpp::Node
{
public:
    AddTwoIntsOOP(int arg1, int arg2) : Node("add_two_ints_oop_client")
    {
        RCLCPP_INFO(this->get_logger(), "Client ready to send request..");

        thread = std::thread(std::bind(&AddTwoIntsOOP::callAddTwoIntsService, this, arg1, arg2));
    }

    void callAddTwoIntsService(int a, int b)
    {
        client = this->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");

        while (!client->wait_for_service(1s))
        {
            RCLCPP_WARN(this->get_logger(), "Service not available, waiting again...");
        }

        auto request = example_interfaces::srv::AddTwoInts::Request::SharedPtr();
        request->a = a;
        request->b = b;

        auto future = client->async_send_request(request);

        try
        {
            auto response = future.get();
            RCLCPP_INFO(this->get_logger(), "The sum of %d and %d is %d", a,b,response->sum);
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Oops! Service call failed.");
        }
    }

private:
    rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr client;
    std::thread thread;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<AddTwoIntsOOP>(atoll(argv[1]),atoll(argv[2]));
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
