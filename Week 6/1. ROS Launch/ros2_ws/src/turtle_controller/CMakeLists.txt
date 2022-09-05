cmake_minimum_required(VERSION 3.5)
project(turtle_controller)

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
find_package(turtlesim REQUIRED)
find_package(geometry_msgs REQUIRED)

# add cpp executable
add_executable(move_linear src/move_linear.cpp)
ament_target_dependencies(move_linear rclcpp geometry_msgs turtlesim)

# install cpp executable
install(TARGETS
  move_linear
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()
