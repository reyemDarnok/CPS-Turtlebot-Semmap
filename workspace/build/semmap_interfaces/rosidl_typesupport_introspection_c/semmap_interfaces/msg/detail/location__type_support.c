// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from semmap_interfaces:msg/Location.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "semmap_interfaces/msg/detail/location__rosidl_typesupport_introspection_c.h"
#include "semmap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "semmap_interfaces/msg/detail/location__functions.h"
#include "semmap_interfaces/msg/detail/location__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void semmap_interfaces__msg__Location__rosidl_typesupport_introspection_c__Location_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  semmap_interfaces__msg__Location__init(message_memory);
}

void semmap_interfaces__msg__Location__rosidl_typesupport_introspection_c__Location_fini_function(void * message_memory)
{
  semmap_interfaces__msg__Location__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember semmap_interfaces__msg__Location__rosidl_typesupport_introspection_c__Location_message_member_array[3] = {
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__msg__Location, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__msg__Location, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__msg__Location, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers semmap_interfaces__msg__Location__rosidl_typesupport_introspection_c__Location_message_members = {
  "semmap_interfaces__msg",  // message namespace
  "Location",  // message name
  3,  // number of fields
  sizeof(semmap_interfaces__msg__Location),
  semmap_interfaces__msg__Location__rosidl_typesupport_introspection_c__Location_message_member_array,  // message members
  semmap_interfaces__msg__Location__rosidl_typesupport_introspection_c__Location_init_function,  // function to initialize message memory (memory has to be allocated)
  semmap_interfaces__msg__Location__rosidl_typesupport_introspection_c__Location_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t semmap_interfaces__msg__Location__rosidl_typesupport_introspection_c__Location_message_type_support_handle = {
  0,
  &semmap_interfaces__msg__Location__rosidl_typesupport_introspection_c__Location_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_semmap_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, msg, Location)() {
  if (!semmap_interfaces__msg__Location__rosidl_typesupport_introspection_c__Location_message_type_support_handle.typesupport_identifier) {
    semmap_interfaces__msg__Location__rosidl_typesupport_introspection_c__Location_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &semmap_interfaces__msg__Location__rosidl_typesupport_introspection_c__Location_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
