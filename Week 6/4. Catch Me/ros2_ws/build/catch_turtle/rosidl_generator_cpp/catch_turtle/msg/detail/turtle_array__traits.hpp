// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from catch_turtle:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_
#define CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_

#include "catch_turtle/msg/detail/turtle_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<catch_turtle::msg::TurtleArray>()
{
  return "catch_turtle::msg::TurtleArray";
}

template<>
inline const char * name<catch_turtle::msg::TurtleArray>()
{
  return "catch_turtle/msg/TurtleArray";
}

template<>
struct has_fixed_size<catch_turtle::msg::TurtleArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<catch_turtle::msg::TurtleArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<catch_turtle::msg::TurtleArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_
