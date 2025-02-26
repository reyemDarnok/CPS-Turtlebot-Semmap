// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from semmap_interfaces:srv/PositionHistory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "semmap_interfaces/srv/detail/position_history__rosidl_typesupport_introspection_c.h"
#include "semmap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "semmap_interfaces/srv/detail/position_history__functions.h"
#include "semmap_interfaces/srv/detail/position_history__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void semmap_interfaces__srv__PositionHistory_Request__rosidl_typesupport_introspection_c__PositionHistory_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  semmap_interfaces__srv__PositionHistory_Request__init(message_memory);
}

void semmap_interfaces__srv__PositionHistory_Request__rosidl_typesupport_introspection_c__PositionHistory_Request_fini_function(void * message_memory)
{
  semmap_interfaces__srv__PositionHistory_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember semmap_interfaces__srv__PositionHistory_Request__rosidl_typesupport_introspection_c__PositionHistory_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__PositionHistory_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers semmap_interfaces__srv__PositionHistory_Request__rosidl_typesupport_introspection_c__PositionHistory_Request_message_members = {
  "semmap_interfaces__srv",  // message namespace
  "PositionHistory_Request",  // message name
  1,  // number of fields
  sizeof(semmap_interfaces__srv__PositionHistory_Request),
  semmap_interfaces__srv__PositionHistory_Request__rosidl_typesupport_introspection_c__PositionHistory_Request_message_member_array,  // message members
  semmap_interfaces__srv__PositionHistory_Request__rosidl_typesupport_introspection_c__PositionHistory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  semmap_interfaces__srv__PositionHistory_Request__rosidl_typesupport_introspection_c__PositionHistory_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t semmap_interfaces__srv__PositionHistory_Request__rosidl_typesupport_introspection_c__PositionHistory_Request_message_type_support_handle = {
  0,
  &semmap_interfaces__srv__PositionHistory_Request__rosidl_typesupport_introspection_c__PositionHistory_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_semmap_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, PositionHistory_Request)() {
  if (!semmap_interfaces__srv__PositionHistory_Request__rosidl_typesupport_introspection_c__PositionHistory_Request_message_type_support_handle.typesupport_identifier) {
    semmap_interfaces__srv__PositionHistory_Request__rosidl_typesupport_introspection_c__PositionHistory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &semmap_interfaces__srv__PositionHistory_Request__rosidl_typesupport_introspection_c__PositionHistory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "semmap_interfaces/srv/detail/position_history__rosidl_typesupport_introspection_c.h"
// already included above
// #include "semmap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "semmap_interfaces/srv/detail/position_history__functions.h"
// already included above
// #include "semmap_interfaces/srv/detail/position_history__struct.h"


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

void semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__PositionHistory_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  semmap_interfaces__srv__PositionHistory_Response__init(message_memory);
}

void semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__PositionHistory_Response_fini_function(void * message_memory)
{
  semmap_interfaces__srv__PositionHistory_Response__fini(message_memory);
}

size_t semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__size_function__PositionHistory_Response__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_const_function__PositionHistory_Response__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_function__PositionHistory_Response__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__fetch_function__PositionHistory_Response__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_const_function__PositionHistory_Response__x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__assign_function__PositionHistory_Response__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_function__PositionHistory_Response__x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__resize_function__PositionHistory_Response__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__size_function__PositionHistory_Response__y(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_const_function__PositionHistory_Response__y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_function__PositionHistory_Response__y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__fetch_function__PositionHistory_Response__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_const_function__PositionHistory_Response__y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__assign_function__PositionHistory_Response__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_function__PositionHistory_Response__y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__resize_function__PositionHistory_Response__y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__size_function__PositionHistory_Response__rotation(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_const_function__PositionHistory_Response__rotation(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_function__PositionHistory_Response__rotation(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__fetch_function__PositionHistory_Response__rotation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_const_function__PositionHistory_Response__rotation(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__assign_function__PositionHistory_Response__rotation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_function__PositionHistory_Response__rotation(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__resize_function__PositionHistory_Response__rotation(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__size_function__PositionHistory_Response__timestamp(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_const_function__PositionHistory_Response__timestamp(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_function__PositionHistory_Response__timestamp(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__fetch_function__PositionHistory_Response__timestamp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_const_function__PositionHistory_Response__timestamp(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__assign_function__PositionHistory_Response__timestamp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_function__PositionHistory_Response__timestamp(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__resize_function__PositionHistory_Response__timestamp(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__PositionHistory_Response_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__PositionHistory_Response, x),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__size_function__PositionHistory_Response__x,  // size() function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_const_function__PositionHistory_Response__x,  // get_const(index) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_function__PositionHistory_Response__x,  // get(index) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__fetch_function__PositionHistory_Response__x,  // fetch(index, &value) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__assign_function__PositionHistory_Response__x,  // assign(index, value) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__resize_function__PositionHistory_Response__x  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__PositionHistory_Response, y),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__size_function__PositionHistory_Response__y,  // size() function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_const_function__PositionHistory_Response__y,  // get_const(index) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_function__PositionHistory_Response__y,  // get(index) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__fetch_function__PositionHistory_Response__y,  // fetch(index, &value) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__assign_function__PositionHistory_Response__y,  // assign(index, value) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__resize_function__PositionHistory_Response__y  // resize(index) function pointer
  },
  {
    "rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__PositionHistory_Response, rotation),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__size_function__PositionHistory_Response__rotation,  // size() function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_const_function__PositionHistory_Response__rotation,  // get_const(index) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_function__PositionHistory_Response__rotation,  // get(index) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__fetch_function__PositionHistory_Response__rotation,  // fetch(index, &value) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__assign_function__PositionHistory_Response__rotation,  // assign(index, value) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__resize_function__PositionHistory_Response__rotation  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces__srv__PositionHistory_Response, timestamp),  // bytes offset in struct
    NULL,  // default value
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__size_function__PositionHistory_Response__timestamp,  // size() function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_const_function__PositionHistory_Response__timestamp,  // get_const(index) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__get_function__PositionHistory_Response__timestamp,  // get(index) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__fetch_function__PositionHistory_Response__timestamp,  // fetch(index, &value) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__assign_function__PositionHistory_Response__timestamp,  // assign(index, value) function pointer
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__resize_function__PositionHistory_Response__timestamp  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__PositionHistory_Response_message_members = {
  "semmap_interfaces__srv",  // message namespace
  "PositionHistory_Response",  // message name
  4,  // number of fields
  sizeof(semmap_interfaces__srv__PositionHistory_Response),
  semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__PositionHistory_Response_message_member_array,  // message members
  semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__PositionHistory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__PositionHistory_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__PositionHistory_Response_message_type_support_handle = {
  0,
  &semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__PositionHistory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_semmap_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, PositionHistory_Response)() {
  if (!semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__PositionHistory_Response_message_type_support_handle.typesupport_identifier) {
    semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__PositionHistory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &semmap_interfaces__srv__PositionHistory_Response__rosidl_typesupport_introspection_c__PositionHistory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "semmap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "semmap_interfaces/srv/detail/position_history__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers semmap_interfaces__srv__detail__position_history__rosidl_typesupport_introspection_c__PositionHistory_service_members = {
  "semmap_interfaces__srv",  // service namespace
  "PositionHistory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // semmap_interfaces__srv__detail__position_history__rosidl_typesupport_introspection_c__PositionHistory_Request_message_type_support_handle,
  NULL  // response message
  // semmap_interfaces__srv__detail__position_history__rosidl_typesupport_introspection_c__PositionHistory_Response_message_type_support_handle
};

static rosidl_service_type_support_t semmap_interfaces__srv__detail__position_history__rosidl_typesupport_introspection_c__PositionHistory_service_type_support_handle = {
  0,
  &semmap_interfaces__srv__detail__position_history__rosidl_typesupport_introspection_c__PositionHistory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, PositionHistory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, PositionHistory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_semmap_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, PositionHistory)() {
  if (!semmap_interfaces__srv__detail__position_history__rosidl_typesupport_introspection_c__PositionHistory_service_type_support_handle.typesupport_identifier) {
    semmap_interfaces__srv__detail__position_history__rosidl_typesupport_introspection_c__PositionHistory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)semmap_interfaces__srv__detail__position_history__rosidl_typesupport_introspection_c__PositionHistory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, PositionHistory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, semmap_interfaces, srv, PositionHistory_Response)()->data;
  }

  return &semmap_interfaces__srv__detail__position_history__rosidl_typesupport_introspection_c__PositionHistory_service_type_support_handle;
}
