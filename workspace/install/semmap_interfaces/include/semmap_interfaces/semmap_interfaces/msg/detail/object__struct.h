// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from semmap_interfaces:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__OBJECT__STRUCT_H_
#define SEMMAP_INTERFACES__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tag'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Object in the package semmap_interfaces.
typedef struct semmap_interfaces__msg__Object
{
  float distance;
  float angle;
  float elevation;
  rosidl_runtime_c__String tag;
} semmap_interfaces__msg__Object;

// Struct for a sequence of semmap_interfaces__msg__Object.
typedef struct semmap_interfaces__msg__Object__Sequence
{
  semmap_interfaces__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semmap_interfaces__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__OBJECT__STRUCT_H_
