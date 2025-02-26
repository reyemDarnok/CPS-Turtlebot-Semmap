// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from semmap_interfaces:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "semmap_interfaces/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace semmap_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: tag
  {
    out << "tag: ";
    rosidl_generator_traits::value_to_yaml(msg.tag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: tag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag: ";
    rosidl_generator_traits::value_to_yaml(msg.tag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Object & msg, bool use_flow_style = false)
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
  const semmap_interfaces::msg::Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  semmap_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semmap_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const semmap_interfaces::msg::Object & msg)
{
  return semmap_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<semmap_interfaces::msg::Object>()
{
  return "semmap_interfaces::msg::Object";
}

template<>
inline const char * name<semmap_interfaces::msg::Object>()
{
  return "semmap_interfaces/msg/Object";
}

template<>
struct has_fixed_size<semmap_interfaces::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<semmap_interfaces::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<semmap_interfaces::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__OBJECT__TRAITS_HPP_
