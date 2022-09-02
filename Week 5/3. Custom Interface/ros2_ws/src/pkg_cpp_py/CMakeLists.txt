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
find_package(rclcpp REQUIRED)
find_package(custom_interfaces REQUIRED)

# add cpp exeutable
add_executable(hardware_status_client src/hardware_status_cli.cpp)
ament_target_dependencies(hardware_status_client rclcpp custom_interfaces)

# install cpp executable
install(TARGETS
  hardware_status_client
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
