cmake_minimum_required(VERSION 3.5)
project(pkg_cpp_py)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)

# install python module
ament_python_install_package(${PROJECT_NAME})

# install python executable
install(PROGRAMS
  scripts/robot_news_station.py
  scripts/transistor_radio.py
  DESTINATION lib/${PROJECT_NAME}
)

# add cpp executable
add_executable(robot_news_station src/robot_news_station.cpp)
ament_target_dependencies(robot_news_station rclcpp example_interfaces)

add_executable(transistor_radio src/transistor_radio.cpp)
ament_target_dependencies(transistor_radio rclcpp example_interfaces)

# install cpp executable
install(TARGETS
  robot_news_station
  transistor_radio
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
