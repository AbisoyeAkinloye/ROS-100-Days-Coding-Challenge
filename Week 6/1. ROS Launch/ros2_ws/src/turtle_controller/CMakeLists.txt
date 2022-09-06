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
add_executable(avoid_wall src/avoid_wall.cpp)
ament_target_dependencies(avoid_wall rclcpp geometry_msgs turtlesim)

add_executable(turtle_linear_movement src/turtle_linear_movement.cpp)
ament_target_dependencies(turtle_linear_movement rclcpp geometry_msgs turtlesim)

# install cpp executable
install(TARGETS
  avoid_wall
  turtle_linear_movement
  DESTINATION lib/${PROJECT_NAME}
)

# install python module
ament_python_install_package(${PROJECT_NAME})

# install python
install(PROGRAMS
  scripts/move_linear.py
  DESTINATION lib/${PROJECT_NAME}
)

# install launch file

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)


ament_package()
