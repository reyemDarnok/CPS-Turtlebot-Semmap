// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from semmap_interfaces:msg/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__STRUCT_H_
#define SEMMAP_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EmergencyStop in the package semmap_interfaces.
typedef struct semmap_interfaces__msg__EmergencyStop
{
  uint8_t cause;
  bool solvable_by_backup;
} semmap_interfaces__msg__EmergencyStop;

// Struct for a sequence of semmap_interfaces__msg__EmergencyStop.
typedef struct semmap_interfaces__msg__EmergencyStop__Sequence
{
  semmap_interfaces__msg__EmergencyStop * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semmap_interfaces__msg__EmergencyStop__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__STRUCT_H_
