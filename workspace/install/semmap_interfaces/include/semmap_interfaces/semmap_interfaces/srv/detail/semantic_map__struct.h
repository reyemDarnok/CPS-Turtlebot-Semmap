// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from semmap_interfaces:srv/SemanticMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__STRUCT_H_
#define SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SemanticMap in the package semmap_interfaces.
typedef struct semmap_interfaces__srv__SemanticMap_Request
{
  uint8_t request_priority;
} semmap_interfaces__srv__SemanticMap_Request;

// Struct for a sequence of semmap_interfaces__srv__SemanticMap_Request.
typedef struct semmap_interfaces__srv__SemanticMap_Request__Sequence
{
  semmap_interfaces__srv__SemanticMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semmap_interfaces__srv__SemanticMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'elevation'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'tag'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SemanticMap in the package semmap_interfaces.
typedef struct semmap_interfaces__srv__SemanticMap_Response
{
  rosidl_runtime_c__int32__Sequence x;
  rosidl_runtime_c__int32__Sequence y;
  rosidl_runtime_c__int32__Sequence elevation;
  rosidl_runtime_c__String__Sequence tag;
} semmap_interfaces__srv__SemanticMap_Response;

// Struct for a sequence of semmap_interfaces__srv__SemanticMap_Response.
typedef struct semmap_interfaces__srv__SemanticMap_Response__Sequence
{
  semmap_interfaces__srv__SemanticMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} semmap_interfaces__srv__SemanticMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEMMAP_INTERFACES__SRV__DETAIL__SEMANTIC_MAP__STRUCT_H_
