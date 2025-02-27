// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from semmap_interfaces:msg/InvalidateMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__TRAITS_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "semmap_interfaces/msg/detail/invalidate_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace semmap_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const InvalidateMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InvalidateMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InvalidateMap & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace semmap_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use semmap_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const semmap_interfaces::msg::InvalidateMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  semmap_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semmap_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const semmap_interfaces::msg::InvalidateMap & msg)
{
  return semmap_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<semmap_interfaces::msg::InvalidateMap>()
{
  return "semmap_interfaces::msg::InvalidateMap";
}

template<>
inline const char * name<semmap_interfaces::msg::InvalidateMap>()
{
  return "semmap_interfaces/msg/InvalidateMap";
}

template<>
struct has_fixed_size<semmap_interfaces::msg::InvalidateMap>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<semmap_interfaces::msg::InvalidateMap>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<semmap_interfaces::msg::InvalidateMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__TRAITS_HPP_
