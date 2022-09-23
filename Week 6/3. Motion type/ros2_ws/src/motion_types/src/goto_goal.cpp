#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"

class GotoGoal : public rclcpp::Node
{
public:
    GotoGoal() : Node("goto_goal")
    {
        velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        pose_subscriber_ = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose", 10, std::bind(&GotoGoal::pose_callback, this, std::placeholders::_1));
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&GotoGoal::goto_goal, this));
        GotoGoal::set_goal();
    }

private:
    void pose_callback(const turtlesim::msg::Pose::SharedPtr pose)
    {
        x1 = pose->x;
        y1 = pose->y;
        theta = pose->theta;
        // RCLCPP_INFO(this->get_logger(), "(x1, y1) = (%.2f , %.2f)", x1,y1);
    }

    void set_goal()
    {
        RCLCPP_INFO(this->get_logger(), "Set the desired (x2, y2) of the turtle...");
        std::cout << "Enter desired x location: ";
        std::cin >> x2;
        std::cout << "Enter desired y location: ";
        std::cin >> y2;
    }

    void goto_goal()
    {
        dist_x = x2 - x1;
        dist_y = y2 - y1;
        euclidean_distance = sqrt(std::pow(dist_x, 2) + pow(dist_y, 2));
        distance_tolerance =  0.1;
        // RCLCPP_INFO(this->get_logger(), "The distance between point (%.2f, %.2f) and (%.2f, %.2f) is: %.2f", x1, y1, x2, y2, euclidean_distance);

        if (euclidean_distance > distance_tolerance)
        {
            float K_linear = 0.5;
            float K_angular = 1.2;
            speed.linear.x = K_linear * euclidean_distance;

            angle = atan2(dist_y, dist_x);
            angular_distance = (angle - theta);

            if (angular_distance > M_PI)
            {
                angular_distance -= 2 * M_PI;
            }
            else if (angular_distance < -M_PI)
            {
                angular_distance += 2 * M_PI;
            }

            speed.angular.z = angular_distance * K_angular;
        }
        else
        {
            speed.linear.x = 0.0;
            speed.angular.z = 0.0;
            RCLCPP_INFO(this->get_logger(), "Goal (x2, y2) = (%f, %f) reached!!!", x2, y2);
        }
        velocity_publisher_->publish(speed);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr pose_subscriber_;
    rclcpp::TimerBase::SharedPtr timer_;
    geometry_msgs::msg::Twist speed;
    float x1, y1, x2, y2, theta, dist_x, dist_y;
    float euclidean_distance, distance_tolerance, angle, angular_distance;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<GotoGoal>());
    rclcpp::shutdown();
    return 0;
}