// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from semmap_interfaces:msg/SlamMap.idl
// generated code does not contain a copyright notice
#include "semmap_interfaces/msg/detail/slam_map__rosidl_typesupport_fastrtps_cpp.hpp"
#include "semmap_interfaces/msg/detail/slam_map__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace semmap_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_semmap_interfaces
cdr_serialize(
  const semmap_interfaces::msg::SlamMap & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: positive_and0_x
  {
    cdr << ros_message.positive_and0_x;
  }
  // Member: negative_x
  {
    cdr << ros_message.negative_x;
  }
  // Member: positive_and0_y
  {
    cdr << ros_message.positive_and0_y;
  }
  // Member: negative_y
  {
    cdr << ros_message.negative_y;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_semmap_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  semmap_interfaces::msg::SlamMap & ros_message)
{
  // Member: positive_and0_x
  {
    cdr >> ros_message.positive_and0_x;
  }

  // Member: negative_x
  {
    cdr >> ros_message.negative_x;
  }

  // Member: positive_and0_y
  {
    cdr >> ros_message.positive_and0_y;
  }

  // Member: negative_y
  {
    cdr >> ros_message.negative_y;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_semmap_interfaces
get_serialized_size(
  const semmap_interfaces::msg::SlamMap & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: positive_and0_x
  {
    size_t array_size = ros_message.positive_and0_x.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.positive_and0_x[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: negative_x
  {
    size_t array_size = ros_message.negative_x.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.negative_x[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: positive_and0_y
  {
    size_t array_size = ros_message.positive_and0_y.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.positive_and0_y[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: negative_y
  {
    size_t array_size = ros_message.negative_y.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.negative_y[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_semmap_interfaces
max_serialized_size_SlamMap(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: positive_and0_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: negative_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: positive_and0_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: negative_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = semmap_interfaces::msg::SlamMap;
    is_plain =
      (
      offsetof(DataType, negative_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SlamMap__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const semmap_interfaces::msg::SlamMap *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SlamMap__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<semmap_interfaces::msg::SlamMap *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SlamMap__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const semmap_interfaces::msg::SlamMap *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SlamMap__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SlamMap(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SlamMap__callbacks = {
  "semmap_interfaces::msg",
  "SlamMap",
  _SlamMap__cdr_serialize,
  _SlamMap__cdr_deserialize,
  _SlamMap__get_serialized_size,
  _SlamMap__max_serialized_size
};

static rosidl_message_type_support_t _SlamMap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SlamMap__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace semmap_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_semmap_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<semmap_interfaces::msg::SlamMap>()
{
  return &semmap_interfaces::msg::typesupport_fastrtps_cpp::_SlamMap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, semmap_interfaces, msg, SlamMap)() {
  return &semmap_interfaces::msg::typesupport_fastrtps_cpp::_SlamMap__handle;
}

#ifdef __cplusplus
}
#endif
