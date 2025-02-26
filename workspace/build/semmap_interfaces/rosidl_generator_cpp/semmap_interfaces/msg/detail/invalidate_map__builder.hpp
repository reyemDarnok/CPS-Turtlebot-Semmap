// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semmap_interfaces:msg/InvalidateMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__BUILDER_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semmap_interfaces/msg/detail/invalidate_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semmap_interfaces
{

namespace msg
{

namespace builder
{

class Init_InvalidateMap_reason
{
public:
  Init_InvalidateMap_reason()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::semmap_interfaces::msg::InvalidateMap reason(::semmap_interfaces::msg::InvalidateMap::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semmap_interfaces::msg::InvalidateMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::semmap_interfaces::msg::InvalidateMap>()
{
  return semmap_interfaces::msg::builder::Init_InvalidateMap_reason();
}

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__BUILDER_HPP_
