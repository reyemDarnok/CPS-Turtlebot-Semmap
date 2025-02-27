// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from semmap_interfaces:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__LOCATION__STRUCT_H_
#define SEMMAP_INTERFACES__MSG__DETAIL__LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Location in the package semmap_interfaces.
typedef struct semmap_interfaces__msg__Location
{
  float orientation;
  int32_t x;
  int32_t y;
} semmap_interfaces__msg__Location;

// Struct for a sequence of semmap_interfaces__msg__Location.
typedef struct semmap_interfaces__msg__Location__Sequence
{
  semmap_interfaces__msg__Location * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semmap_interfaces__msg__Location__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__LOCATION__STRUCT_H_
