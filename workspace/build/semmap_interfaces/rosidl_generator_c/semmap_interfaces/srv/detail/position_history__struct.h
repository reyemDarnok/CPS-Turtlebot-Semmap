// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from semmap_interfaces:srv/PositionHistory.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__SRV__DETAIL__POSITION_HISTORY__STRUCT_H_
#define SEMMAP_INTERFACES__SRV__DETAIL__POSITION_HISTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PositionHistory in the package semmap_interfaces.
typedef struct semmap_interfaces__srv__PositionHistory_Request
{
  uint8_t structure_needs_at_least_one_member;
} semmap_interfaces__srv__PositionHistory_Request;

// Struct for a sequence of semmap_interfaces__srv__PositionHistory_Request.
typedef struct semmap_interfaces__srv__PositionHistory_Request__Sequence
{
  semmap_interfaces__srv__PositionHistory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semmap_interfaces__srv__PositionHistory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'rotation'
// Member 'timestamp'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/PositionHistory in the package semmap_interfaces.
typedef struct semmap_interfaces__srv__PositionHistory_Response
{
  rosidl_runtime_c__float__Sequence x;
  rosidl_runtime_c__float__Sequence y;
  rosidl_runtime_c__float__Sequence rotation;
  rosidl_runtime_c__float__Sequence timestamp;
} semmap_interfaces__srv__PositionHistory_Response;

// Struct for a sequence of semmap_interfaces__srv__PositionHistory_Response.
typedef struct semmap_interfaces__srv__PositionHistory_Response__Sequence
{
  semmap_interfaces__srv__PositionHistory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semmap_interfaces__srv__PositionHistory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEMMAP_INTERFACES__SRV__DETAIL__POSITION_HISTORY__STRUCT_H_
