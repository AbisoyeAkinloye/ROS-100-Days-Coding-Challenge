// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from catch_turtle:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
#define CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtles'
#include "catch_turtle/msg/detail/turtle__struct.h"

// Struct defined in msg/TurtleArray in the package catch_turtle.
typedef struct catch_turtle__msg__TurtleArray
{
  catch_turtle__msg__Turtle__Sequence turtles;
} catch_turtle__msg__TurtleArray;

// Struct for a sequence of catch_turtle__msg__TurtleArray.
typedef struct catch_turtle__msg__TurtleArray__Sequence
{
  catch_turtle__msg__TurtleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} catch_turtle__msg__TurtleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CATCH_TURTLE__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
