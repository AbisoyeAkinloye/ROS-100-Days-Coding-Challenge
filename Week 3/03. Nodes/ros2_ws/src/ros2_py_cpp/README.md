```c
# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)

# add cpp executable
add_executable(cpp_node src/func_node.cpp)
ament_target_dependencies(cpp_node rclcpp)
add_executable(cpp_oop_node src/oop_node.cpp)
ament_target_dependencies(cpp_oop_node rclcpp)

# install cpp executable
install(TARGETS
  cpp_node
  cpp_oop_node
  DESTINATION lib/${PROJECT_NAME}
)

# install python module
ament_python_install_package(${PROJECT_NAME})

# install python executable
install(PROGRAMS
  scripts/func_node.py
  scripts/oop_node.py
  DESTINATION lib/${PROJECT_NAME}
)
```