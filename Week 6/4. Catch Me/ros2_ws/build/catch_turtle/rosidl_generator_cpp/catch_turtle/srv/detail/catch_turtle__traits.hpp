// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from catch_turtle:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef CATCH_TURTLE__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_
#define CATCH_TURTLE__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_

#include "catch_turtle/srv/detail/catch_turtle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<catch_turtle::srv::CatchTurtle_Request>()
{
  return "catch_turtle::srv::CatchTurtle_Request";
}

template<>
inline const char * name<catch_turtle::srv::CatchTurtle_Request>()
{
  return "catch_turtle/srv/CatchTurtle_Request";
}

template<>
struct has_fixed_size<catch_turtle::srv::CatchTurtle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<catch_turtle::srv::CatchTurtle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<catch_turtle::srv::CatchTurtle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<catch_turtle::srv::CatchTurtle_Response>()
{
  return "catch_turtle::srv::CatchTurtle_Response";
}

template<>
inline const char * name<catch_turtle::srv::CatchTurtle_Response>()
{
  return "catch_turtle/srv/CatchTurtle_Response";
}

template<>
struct has_fixed_size<catch_turtle::srv::CatchTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<catch_turtle::srv::CatchTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<catch_turtle::srv::CatchTurtle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<catch_turtle::srv::CatchTurtle>()
{
  return "catch_turtle::srv::CatchTurtle";
}

template<>
inline const char * name<catch_turtle::srv::CatchTurtle>()
{
  return "catch_turtle/srv/CatchTurtle";
}

template<>
struct has_fixed_size<catch_turtle::srv::CatchTurtle>
  : std::integral_constant<
    bool,
    has_fixed_size<catch_turtle::srv::CatchTurtle_Request>::value &&
    has_fixed_size<catch_turtle::srv::CatchTurtle_Response>::value
  >
{
};

template<>
struct has_bounded_size<catch_turtle::srv::CatchTurtle>
  : std::integral_constant<
    bool,
    has_bounded_size<catch_turtle::srv::CatchTurtle_Request>::value &&
    has_bounded_size<catch_turtle::srv::CatchTurtle_Response>::value
  >
{
};

template<>
struct is_service<catch_turtle::srv::CatchTurtle>
  : std::true_type
{
};

template<>
struct is_service_request<catch_turtle::srv::CatchTurtle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<catch_turtle::srv::CatchTurtle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CATCH_TURTLE__SRV__DETAIL__CATCH_TURTLE__TRAITS_HPP_
