// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from semmap_interfaces:msg/InvalidateMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__STRUCT_H_
#define SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/InvalidateMap in the package semmap_interfaces.
typedef struct semmap_interfaces__msg__InvalidateMap
{
  uint8_t reason;
} semmap_interfaces__msg__InvalidateMap;

// Struct for a sequence of semmap_interfaces__msg__InvalidateMap.
typedef struct semmap_interfaces__msg__InvalidateMap__Sequence
{
  semmap_interfaces__msg__InvalidateMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semmap_interfaces__msg__InvalidateMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__STRUCT_H_
