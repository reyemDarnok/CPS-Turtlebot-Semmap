// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from semmap_interfaces:msg/SlamMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "semmap_interfaces/msg/detail/slam_map__rosidl_typesupport_introspection_c.h"
#include "semmap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "semmap_interfaces/msg/detail/slam_map__functions.h"
#include "semmap_interfaces/msg/detail/slam_map__struct.h"


// Include directives for member types
// Member `positive_and0_x`
// Member `negative_x`
// Member `positive_and0_y`
// Member `negative_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__SlamMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  semmap_interfaces__msg__SlamMap__init(message_memory);
}

void semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__SlamMap_fini_function(void * message_memory)
{
  semmap_interfaces__msg__SlamMap__fini(message_memory);
}

size_t semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__size_function__SlamMap__positive_and0_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_const_function__SlamMap__positive_and0_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_function__SlamMap__positive_and0_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__fetch_function__SlamMap__positive_and0_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_const_function__SlamMap__positive_and0_x(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__assign_function__SlamMap__positive_and0_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_function__SlamMap__positive_and0_x(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__resize_function__SlamMap__positive_and0_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__size_function__SlamMap__negative_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_const_function__SlamMap__negative_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_function__SlamMap__negative_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__fetch_function__SlamMap__negative_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_const_function__SlamMap__negative_x(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__assign_function__SlamMap__negative_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_function__SlamMap__negative_x(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__resize_function__SlamMap__negative_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__size_function__SlamMap__positive_and0_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_const_function__SlamMap__positive_and0_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_function__SlamMap__positive_and0_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__fetch_function__SlamMap__positive_and0_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_const_function__SlamMap__positive_and0_y(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__assign_function__SlamMap__positive_and0_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_function__SlamMap__positive_and0_y(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__resize_function__SlamMap__positive_and0_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__size_function__SlamMap__negative_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_const_function__SlamMap__negative_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_function__SlamMap__negative_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__fetch_function__SlamMap__negative_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_const_function__SlamMap__negative_y(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__assign_function__SlamMap__negative_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_function__SlamMap__negative_y(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__resize_function__SlamMap__negative_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__SlamMap_message_member_array[4] = {
  {
    "positive_and0_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__msg__SlamMap, positive_and0_x),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__size_function__SlamMap__positive_and0_x,  // size() function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_const_function__SlamMap__positive_and0_x,  // get_const(index) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_function__SlamMap__positive_and0_x,  // get(index) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__fetch_function__SlamMap__positive_and0_x,  // fetch(index, &value) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__assign_function__SlamMap__positive_and0_x,  // assign(index, value) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__resize_function__SlamMap__positive_and0_x  // resize(index) function pointer
  },
  {
    "negative_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__msg__SlamMap, negative_x),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__size_function__SlamMap__negative_x,  // size() function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_const_function__SlamMap__negative_x,  // get_const(index) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_function__SlamMap__negative_x,  // get(index) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__fetch_function__SlamMap__negative_x,  // fetch(index, &value) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__assign_function__SlamMap__negative_x,  // assign(index, value) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__resize_function__SlamMap__negative_x  // resize(index) function pointer
  },
  {
    "positive_and0_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__msg__SlamMap, positive_and0_y),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__size_function__SlamMap__positive_and0_y,  // size() function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_const_function__SlamMap__positive_and0_y,  // get_const(index) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_function__SlamMap__positive_and0_y,  // get(index) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__fetch_function__SlamMap__positive_and0_y,  // fetch(index, &value) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__assign_function__SlamMap__positive_and0_y,  // assign(index, value) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__resize_function__SlamMap__positive_and0_y  // resize(index) function pointer
  },
  {
    "negative_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__msg__SlamMap, negative_y),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__size_function__SlamMap__negative_y,  // size() function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_const_function__SlamMap__negative_y,  // get_const(index) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__get_function__SlamMap__negative_y,  // get(index) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__fetch_function__SlamMap__negative_y,  // fetch(index, &value) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__assign_function__SlamMap__negative_y,  // assign(index, value) function pointer
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__resize_function__SlamMap__negative_y  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__SlamMap_message_members = {
  "semmap_interfaces__msg",  // message namespace
  "SlamMap",  // message name
  4,  // number of fields
  sizeof(semmap_interfaces__msg__SlamMap),
  semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__SlamMap_message_member_array,  // message members
  semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__SlamMap_init_function,  // function to initialize message memory (memory has to be allocated)
  semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__SlamMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__SlamMap_message_type_support_handle = {
  0,
  &semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__SlamMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_semmap_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, msg, SlamMap)() {
  if (!semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__SlamMap_message_type_support_handle.typesupport_identifier) {
    semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__SlamMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &semmap_interfaces__msg__SlamMap__rosidl_typesupport_introspection_c__SlamMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
