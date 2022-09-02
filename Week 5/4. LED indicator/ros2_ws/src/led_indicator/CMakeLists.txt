cmake_minimum_required(VERSION 3.5)
project(led_indicator)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(custom_interfaces REQUIRED)

# add cpp executable
add_executable(battery_node src/battery_node.cpp)
ament_target_dependencies(battery_node rclcpp custom_interfaces)

# install cpp executable
install(TARGETS
  battery_node
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()
