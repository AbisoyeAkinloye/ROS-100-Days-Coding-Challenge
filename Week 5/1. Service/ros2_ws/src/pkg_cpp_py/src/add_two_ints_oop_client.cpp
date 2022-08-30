#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

using namespace std::chrono_literals;

class AddTwoIntsOOP : public rclcpp::Node
{
public:
    AddTwoIntsOOP() : Node("add_two_ints_oop_client")
    {
        client_ = this->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");

        while (!client_->wait_for_service(1s))
        {
            if (!rclcpp::ok())
            {
                RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
            }
            RCLCPP_WARN(this->get_logger(), "Server is not ready, waiting...");
        }
    }

    void send_request(int a = 3, int b = 4)
    {
        request->a = a;
        request->b = b;

        auto future = client_->async_send_request(request);

        try
        {
            auto response = future.get();
            RCLCPP_INFO(this->get_logger(), "The sum of %d and %d is %d", a, b, response->sum);
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Oops! Service call failed.");
        }
    }

private:
    rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr client_;
    example_interfaces::srv::AddTwoInts::Request::SharedPtr request;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<AddTwoIntsOOP>();
    rclcpp::shutdown();
    return 0;
}