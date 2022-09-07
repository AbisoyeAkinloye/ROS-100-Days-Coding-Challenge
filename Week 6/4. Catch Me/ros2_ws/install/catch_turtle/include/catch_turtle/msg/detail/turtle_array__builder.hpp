// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from catch_turtle:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
#define CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_

#include "catch_turtle/msg/detail/turtle_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace catch_turtle
{

namespace msg
{

namespace builder
{

class Init_TurtleArray_turtles
{
public:
  Init_TurtleArray_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::catch_turtle::msg::TurtleArray turtles(::catch_turtle::msg::TurtleArray::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::catch_turtle::msg::TurtleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::catch_turtle::msg::TurtleArray>()
{
  return catch_turtle::msg::builder::Init_TurtleArray_turtles();
}

}  // namespace catch_turtle

#endif  // CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
