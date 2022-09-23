#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"

class GotoGoal : public rclcpp::Node
{
public:
    GotoGoal() : Node("goto_goal")
    {
        velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        pose_subscriber_ = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose", 10, std::bind(&GotoGoal::pose_callback,this, std::placeholders::_1));
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&GotoGoal::goto_goal, this));
        GotoGoal::set_goal();
    }

private:
    void pose_callback(const turtlesim::msg::Pose::SharedPtr pose){
        x1 = pose->x;
        y1 = pose->y;
        theta = pose->theta;
        // RCLCPP_INFO(this->get_logger(), "(x1, y1) = (%.2f , %.2f)", x1,y1);
    }

    void set_goal(){
        RCLCPP_INFO(this->get_logger(),"Set the desired (x2, y2) of the turtle...");
        std::cout << "Enter desired x location: ";
        std::cin >> x2; 
        std::cout << "Enter desired y location: ";
        std::cin >> y2;
    }

    void goto_goal(){
        dist_x = x2 - x1;
        dist_y = y2 - y1;
        euclidean_distance = sqrt(pow(dist_x,2) + pow(dist_y,2));
        RCLCPP_INFO(this->get_logger(), "The distance between point (%.2f, %.2f) and (%.2f, %.2f) is: %.2f", x1,y1,x2,y2,euclidean_distance);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr pose_subscriber_;
    rclcpp::TimerBase::SharedPtr timer_;
    geometry_msgs::msg::Twist::SharedPtr speed;
    double x1,y1,x2,y2,theta,dist_x, dist_y,euclidean_distance;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<GotoGoal>());
    rclcpp::shutdown();
    return 0;
}