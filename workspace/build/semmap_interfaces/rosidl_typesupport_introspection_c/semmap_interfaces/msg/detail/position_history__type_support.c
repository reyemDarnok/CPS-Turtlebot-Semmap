// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from semmap_interfaces:msg/PositionHistory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "semmap_interfaces/msg/detail/position_history__rosidl_typesupport_introspection_c.h"
#include "semmap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "semmap_interfaces/msg/detail/position_history__functions.h"
#include "semmap_interfaces/msg/detail/position_history__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `rotation`
// Member `timestamp`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__PositionHistory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  semmap_interfaces__msg__PositionHistory__init(message_memory);
}

void semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__PositionHistory_fini_function(void * message_memory)
{
  semmap_interfaces__msg__PositionHistory__fini(message_memory);
}

size_t semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__size_function__PositionHistory__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_const_function__PositionHistory__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_function__PositionHistory__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__fetch_function__PositionHistory__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_const_function__PositionHistory__x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__assign_function__PositionHistory__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_function__PositionHistory__x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__resize_function__PositionHistory__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__size_function__PositionHistory__y(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_const_function__PositionHistory__y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_function__PositionHistory__y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__fetch_function__PositionHistory__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_const_function__PositionHistory__y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__assign_function__PositionHistory__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_function__PositionHistory__y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__resize_function__PositionHistory__y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__size_function__PositionHistory__rotation(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_const_function__PositionHistory__rotation(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_function__PositionHistory__rotation(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__fetch_function__PositionHistory__rotation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_const_function__PositionHistory__rotation(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__assign_function__PositionHistory__rotation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_function__PositionHistory__rotation(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__resize_function__PositionHistory__rotation(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__size_function__PositionHistory__timestamp(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_const_function__PositionHistory__timestamp(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_function__PositionHistory__timestamp(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__fetch_function__PositionHistory__timestamp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_const_function__PositionHistory__timestamp(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__assign_function__PositionHistory__timestamp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_function__PositionHistory__timestamp(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__resize_function__PositionHistory__timestamp(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__PositionHistory_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__msg__PositionHistory, x),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__size_function__PositionHistory__x,  // size() function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_const_function__PositionHistory__x,  // get_const(index) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_function__PositionHistory__x,  // get(index) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__fetch_function__PositionHistory__x,  // fetch(index, &value) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__assign_function__PositionHistory__x,  // assign(index, value) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__resize_function__PositionHistory__x  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__msg__PositionHistory, y),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__size_function__PositionHistory__y,  // size() function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_const_function__PositionHistory__y,  // get_const(index) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_function__PositionHistory__y,  // get(index) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__fetch_function__PositionHistory__y,  // fetch(index, &value) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__assign_function__PositionHistory__y,  // assign(index, value) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__resize_function__PositionHistory__y  // resize(index) function pointer
  },
  {
    "rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__msg__PositionHistory, rotation),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__size_function__PositionHistory__rotation,  // size() function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_const_function__PositionHistory__rotation,  // get_const(index) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_function__PositionHistory__rotation,  // get(index) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__fetch_function__PositionHistory__rotation,  // fetch(index, &value) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__assign_function__PositionHistory__rotation,  // assign(index, value) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__resize_function__PositionHistory__rotation  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__msg__PositionHistory, timestamp),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__size_function__PositionHistory__timestamp,  // size() function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_const_function__PositionHistory__timestamp,  // get_const(index) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__get_function__PositionHistory__timestamp,  // get(index) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__fetch_function__PositionHistory__timestamp,  // fetch(index, &value) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__assign_function__PositionHistory__timestamp,  // assign(index, value) function pointer
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__resize_function__PositionHistory__timestamp  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__PositionHistory_message_members = {
  "semmap_interfaces__msg",  // message namespace
  "PositionHistory",  // message name
  4,  // number of fields
  sizeof(semmap_interfaces__msg__PositionHistory),
  semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__PositionHistory_message_member_array,  // message members
  semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__PositionHistory_init_function,  // function to initialize message memory (memory has to be allocated)
  semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__PositionHistory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__PositionHistory_message_type_support_handle = {
  0,
  &semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__PositionHistory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_semmap_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, msg, PositionHistory)() {
  if (!semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__PositionHistory_message_type_support_handle.typesupport_identifier) {
    semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__PositionHistory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &semmap_interfaces__msg__PositionHistory__rosidl_typesupport_introspection_c__PositionHistory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
