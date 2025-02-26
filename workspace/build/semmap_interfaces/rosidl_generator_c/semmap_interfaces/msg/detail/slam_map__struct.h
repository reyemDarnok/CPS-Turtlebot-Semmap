// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from semmap_interfaces:msg/SlamMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__STRUCT_H_
#define SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positive_and0_x'
// Member 'negative_x'
// Member 'positive_and0_y'
// Member 'negative_y'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SlamMap in the package semmap_interfaces.
typedef struct semmap_interfaces__msg__SlamMap
{
  rosidl_runtime_c__boolean__Sequence positive_and0_x;
  rosidl_runtime_c__boolean__Sequence negative_x;
  rosidl_runtime_c__boolean__Sequence positive_and0_y;
  rosidl_runtime_c__boolean__Sequence negative_y;
} semmap_interfaces__msg__SlamMap;

// Struct for a sequence of semmap_interfaces__msg__SlamMap.
typedef struct semmap_interfaces__msg__SlamMap__Sequence
{
  semmap_interfaces__msg__SlamMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semmap_interfaces__msg__SlamMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__STRUCT_H_
