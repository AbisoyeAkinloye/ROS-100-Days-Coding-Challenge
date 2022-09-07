// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from catch_turtle:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef CATCH_TURTLE__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
#define CATCH_TURTLE__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_

#include "catch_turtle/srv/detail/catch_turtle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace catch_turtle
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Request_name
{
public:
  Init_CatchTurtle_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::catch_turtle::srv::CatchTurtle_Request name(::catch_turtle::srv::CatchTurtle_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::catch_turtle::srv::CatchTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::catch_turtle::srv::CatchTurtle_Request>()
{
  return catch_turtle::srv::builder::Init_CatchTurtle_Request_name();
}

}  // namespace catch_turtle


namespace catch_turtle
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Response_succes
{
public:
  Init_CatchTurtle_Response_succes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::catch_turtle::srv::CatchTurtle_Response succes(::catch_turtle::srv::CatchTurtle_Response::_succes_type arg)
  {
    msg_.succes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::catch_turtle::srv::CatchTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::catch_turtle::srv::CatchTurtle_Response>()
{
  return catch_turtle::srv::builder::Init_CatchTurtle_Response_succes();
}

}  // namespace catch_turtle

#endif  // CATCH_TURTLE__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
