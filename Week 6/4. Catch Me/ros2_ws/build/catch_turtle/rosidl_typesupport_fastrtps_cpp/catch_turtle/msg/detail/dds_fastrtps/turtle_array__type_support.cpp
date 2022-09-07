// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from catch_turtle:msg/TurtleArray.idl
// generated code does not contain a copyright notice
#include "catch_turtle/msg/detail/turtle_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "catch_turtle/msg/detail/turtle_array__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace catch_turtle
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const catch_turtle::msg::Turtle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  catch_turtle::msg::Turtle &);
size_t get_serialized_size(
  const catch_turtle::msg::Turtle &,
  size_t current_alignment);
size_t
max_serialized_size_Turtle(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace catch_turtle


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: turtles
  {
    size_t size = ros_message.turtles.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      catch_turtle::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.turtles[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_catch_turtle
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  catch_turtle::msg::TurtleArray & ros_message)
{
  // Member: turtles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.turtles.resize(size);
    for (size_t i = 0; i < size; i++) {
      catch_turtle::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.turtles[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_catch_turtle
get_serialized_size(
  const catch_turtle::msg::TurtleArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: turtles
  {
    size_t array_size = ros_message.turtles.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        catch_turtle::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.turtles[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_catch_turtle
max_serialized_size_TurtleArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: turtles
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        catch_turtle::msg::typesupport_fastrtps_cpp::max_serialized_size_Turtle(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TurtleArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const catch_turtle::msg::TurtleArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TurtleArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<catch_turtle::msg::TurtleArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TurtleArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const catch_turtle::msg::TurtleArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TurtleArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TurtleArray(full_bounded, 0);
}

static message_type_support_callbacks_t _TurtleArray__callbacks = {
  "catch_turtle::msg",
  "TurtleArray",
  _TurtleArray__cdr_serialize,
  _TurtleArray__cdr_deserialize,
  _TurtleArray__get_serialized_size,
  _TurtleArray__max_serialized_size
};

static rosidl_message_type_support_t _TurtleArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TurtleArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace catch_turtle

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_catch_turtle
const rosidl_message_type_support_t *
get_message_type_support_handle<catch_turtle::msg::TurtleArray>()
{
  return &catch_turtle::msg::typesupport_fastrtps_cpp::_TurtleArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, catch_turtle, msg, TurtleArray)() {
  return &catch_turtle::msg::typesupport_fastrtps_cpp::_TurtleArray__handle;
}

#ifdef __cplusplus
}
#endif
