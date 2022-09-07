// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from catch_turtle:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "catch_turtle/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "catch_turtle/msg/detail/turtle_array__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace catch_turtle
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_catch_turtle
cdr_serialize(
  const catch_turtle::msg::TurtleArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_catch_turtle
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  catch_turtle::msg::TurtleArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_catch_turtle
get_serialized_size(
  const catch_turtle::msg::TurtleArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_catch_turtle
max_serialized_size_TurtleArray(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace catch_turtle

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_catch_turtle
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, catch_turtle, msg, TurtleArray)();

#ifdef __cplusplus
}
#endif

#endif  // CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
