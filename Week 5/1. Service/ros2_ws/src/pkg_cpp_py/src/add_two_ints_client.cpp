#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

using namespace std::chrono_literals;

int main(int argc, char* argv[]){
    rclcpp::init(argc, argv);

    auto node = std::make_shared<rclcpp::Node>("add_two_ints_client");
    auto client = node->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");

    // check for server
    while(!client->wait_for_service(1s)){
        RCLCPP_WARN(node->get_logger(), "Server not available, waiting...");
    }

    auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
    request->a = atoll(argv[1]);
    request->b = atoll(argv[2]);

    auto future = client->async_send_request(request);

    // wait for result
    if (rclcpp::spin_until_future_complete(node, future) == rclcpp::FutureReturnCode::SUCCESS){
        RCLCPP_INFO(node->get_logger(), "The sum of %d and %d is %d", request->a, request->b, future.get()->sum);
    } else {
        RCLCPP_ERROR(node->get_logger(), "Ooops! failed to call service.");
    }

    return 0;
}