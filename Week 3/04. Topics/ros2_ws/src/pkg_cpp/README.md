# ROS Topic

## Write C++ ROS Publisher
Source code <a href="./src/robot_news_station.cpp">here</a>
<div id="publisher"></div>

- Create a file in the src folder of the package `robot_news_station.cpp`
- Include the ROS client library and the default `example_interfaces` msg file globally installed when install ROS.
- Add the `example_interfaces` to the `package.xml` as dependency.

```cpp
#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"
```

- `std::chrono_literals` is used in the timer to specify the rate of publishing. That is, in milliseconds or seconds `10ms` `1s`

```cpp
using namespace std::chrono_literals;
```

- Create publisher in the `public` specifier and declare it in the `private` specifier.

```cpp
 publisher_ = this->create_publisher<msg_type>("topic_name", QoS);

rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr publisher_;

```

- create timer, specify rate s argument, bind the callback (always) because it is a callback.

```cpp
timer_ = this->create_wall_timer(1s,std::bind(&Classname::callback_function, this));

rclcpp::TimerBase::SharedPtr timer_;
```

**Note:** The `std::bind` take two arguments `callback_function` and `this` if the function has no parameter but three arguments if the function has parameter.

- Create the callback function

```cpp
private:
    void publish_news()
    {
        auto msg = example_interfaces::msg::String();
        msg.data = std::string("Hi, this is ") + robot_name_ + std::string(" from the Robot news station");
        publisher_->publish(msg);
    }

    std::string robot_name_;
```

- Go to the `CmakeList.txt`

```c
# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)

# add executable
add_executable(executable src/filename.cpp)
ament_target_dependencies(executable rcpcpp example_interfaces)

# install dependencies
install(TARGETS
    executable
    DESTINATION lib/${PROJECT_NAME}
)
```

## Write C++ ROS Subscriber
Source code <a href="./src/smartphone.cpp">here</a>
<div id="subscriber"></div>

- Create another file for the subscriber
- Include the ROS client library and msg file

```cpp
#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"
```

- `std::placeholders` is used in the `timer` as 3rd parameter when the callback function has a parameter. `_1` is determined by the numbers of parameters.

```cpp
using std::placeholders::_1;
```

- Create subcription.

```cpp
this->create_subscription<example_interfaces::msg::String>("robot_news", 10, std::bind(&Smartphone::robot_news_callback, this,_1));

rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr subscriber_;
```
- Create a callback for the subscription with a parameter.
```cpp
private:
    void robot_news_callback(const example_interfaces::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "%s", msg->data.c_str());
    }
```

**Note**: Always declare the parameter as constant `const`.
