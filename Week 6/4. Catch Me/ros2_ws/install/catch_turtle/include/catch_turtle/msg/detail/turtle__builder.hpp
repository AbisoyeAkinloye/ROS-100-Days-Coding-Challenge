// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from catch_turtle:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef CATCH_TURTLE__MSG__DETAIL__TURTLE__BUILDER_HPP_
#define CATCH_TURTLE__MSG__DETAIL__TURTLE__BUILDER_HPP_

#include "catch_turtle/msg/detail/turtle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace catch_turtle
{

namespace msg
{

namespace builder
{

class Init_Turtle_theta
{
public:
  explicit Init_Turtle_theta(::catch_turtle::msg::Turtle & msg)
  : msg_(msg)
  {}
  ::catch_turtle::msg::Turtle theta(::catch_turtle::msg::Turtle::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::catch_turtle::msg::Turtle msg_;
};

class Init_Turtle_y
{
public:
  explicit Init_Turtle_y(::catch_turtle::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_theta y(::catch_turtle::msg::Turtle::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Turtle_theta(msg_);
  }

private:
  ::catch_turtle::msg::Turtle msg_;
};

class Init_Turtle_x
{
public:
  explicit Init_Turtle_x(::catch_turtle::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_y x(::catch_turtle::msg::Turtle::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Turtle_y(msg_);
  }

private:
  ::catch_turtle::msg::Turtle msg_;
};

class Init_Turtle_name
{
public:
  Init_Turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turtle_x name(::catch_turtle::msg::Turtle::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Turtle_x(msg_);
  }

private:
  ::catch_turtle::msg::Turtle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::catch_turtle::msg::Turtle>()
{
  return catch_turtle::msg::builder::Init_Turtle_name();
}

}  // namespace catch_turtle

#endif  // CATCH_TURTLE__MSG__DETAIL__TURTLE__BUILDER_HPP_
