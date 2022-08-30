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
find_library(ament_cmake_python REQURED)
find_package(rclpy REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)

# add python module
ament_python_install_package(${PROJECT_NAME})

# install python executable
install(PROGRAMS
  scripts/add_two_ints_server.py
  scripts/add_two_ints_client.py
  DESTINATION lib/${PROJECT_NAME}
)

# add cpp executable
add_executable(add_two_ints_server src/add_two_ints_server.cpp)
ament_target_dependencies(add_two_ints_server rclcpp example_interfaces)

add_executable(add_two_ints_oop_server src/add_two_ints_oop_server.cpp)
ament_target_dependencies(add_two_ints_oop_server rclcpp example_interfaces)

add_executable(add_two_ints_client src/add_two_ints_client.cpp)
ament_target_dependencies(add_two_ints_client rclcpp example_interfaces)

add_executable(add_two_ints_oop_client src/add_two_ints_oop_client.cpp)
ament_target_dependencies(add_two_ints_oop_client rclcpp example_interfaces)

# install cpp executable
install(TARGETS
  add_two_ints_server
  add_two_ints_oop_server
  add_two_ints_client
  add_two_ints_oop_client
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()
