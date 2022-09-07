// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from catch_turtle:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef CATCH_TURTLE__MSG__DETAIL__TURTLE__TRAITS_HPP_
#define CATCH_TURTLE__MSG__DETAIL__TURTLE__TRAITS_HPP_

#include "catch_turtle/msg/detail/turtle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<catch_turtle::msg::Turtle>()
{
  return "catch_turtle::msg::Turtle";
}

template<>
inline const char * name<catch_turtle::msg::Turtle>()
{
  return "catch_turtle/msg/Turtle";
}

template<>
struct has_fixed_size<catch_turtle::msg::Turtle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<catch_turtle::msg::Turtle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<catch_turtle::msg::Turtle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CATCH_TURTLE__MSG__DETAIL__TURTLE__TRAITS_HPP_
