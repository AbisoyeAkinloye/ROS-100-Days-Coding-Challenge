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

Smart pointer `std::make_shared` is used to dynamically allocate memory and its automatically destroy it when the variable is out of scope. 


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