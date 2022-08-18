# Create Node

## Create C++ Node

* Create a file in the package `src` directory
* You can call the file `first_node.cpp` for example
```
cd ros_cpp/src

touch first_node.cpp
```
* Include the `rclcpp` header file. If editor doesn't know the include path, you can include it in the C/C++ Configuration JSON.
```JSON
 "includePath": [
    "/opt/ros/foxy/include"
    ],
```

* Code boilerplate
```c++
#include "rclcpp/rclcpp.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("cpp_test");
    RCLCPP_INFO(node->get_logger(), "Hello from Cpp Node");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
```

**Code explanation**
```c++
rclcpp::init(argc, argv);
auto node = std::make_shared<rclcpp::Node>("cpp_test");
```

The first line initializes the ros client node with the argument in the `main` function parameter.

Smart pointer `std::make_shared` is used to dynamically allocate memory and it will automatically destroy it when the variable is out of scope. 


* Goto `CmakeLists.txt` then create C++ executable and install it.
```c
# create cpp executable
add_executable(cpp_node src/first_node.cpp)
ament_target_dependencies(cpp_node rclcpp)

# install cpp executable
install(TARGETS
  cpp_node
  DESTINATION lib/${PROJECT_NAME}
)
```

**Note:** `cpp_node` is the executable name while `first_node.cpp` is the file name. 

## Create C++ OOP Node 
```c++
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

class MyNode : public rclcpp::Node
{
public:
    MyNode() : Node("cpp_node"), counter_ {0}
    {
        RCLCPP_INFO(this->get_logger(), "Hello from C++ OOP node");
        timer_ = this->create_wall_timer(1s, std::bind(&MyNode::timer_callback, this));
    }

private:
    void timer_callback()
    {
        counter_ ++;
        RCLCPP_INFO(this->get_logger(), "Hello %d",counter_);
    }

    rclcpp::TimerBase::SharedPtr timer_;
    int counter_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MyNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
```

**Code Explained:**

`std::chrono_literals` is used in the timer to specify milliseconds or second. E.g 1s, 1ms and so on.

`MyNode` is a derived class which inherit from the base class `rclcpp::Node` to make use of methods therein.

```c++
rclcpp::TimerBase::SharePtr timer_;
```
It is used to declare `timer_` variable. `rclcpp::TimerBase` is the type, `SharePtr` is a function in ROS equivalent to `std::make_shared` to dynamically allocate memory and delete it automatically when it is out of scope. The also allows the use of `->` func. 

```c++
timer_ = this->create_wall_timer(1s, std::bind(&MyNode::timer_callback, this));
```

It is conventional to bind `wall_timer` to the callback address, then add the second argument `this`.