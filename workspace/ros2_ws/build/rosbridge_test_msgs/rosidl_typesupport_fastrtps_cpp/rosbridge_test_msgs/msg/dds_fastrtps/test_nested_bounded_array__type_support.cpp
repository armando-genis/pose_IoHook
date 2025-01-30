// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rosbridge_test_msgs:msg/TestNestedBoundedArray.idl
// generated code does not contain a copyright notice
#include "rosbridge_test_msgs/msg/test_nested_bounded_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rosbridge_test_msgs/msg/test_nested_bounded_array__struct.hpp"

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
namespace rosbridge_test_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rosbridge_test_msgs::msg::TestFloat32BoundedArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rosbridge_test_msgs::msg::TestFloat32BoundedArray &);
size_t get_serialized_size(
  const rosbridge_test_msgs::msg::TestFloat32BoundedArray &,
  size_t current_alignment);
size_t
max_serialized_size_TestFloat32BoundedArray(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbridge_test_msgs
cdr_serialize(
  const rosbridge_test_msgs::msg::TestNestedBoundedArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: data
  rosbridge_test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.data,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbridge_test_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosbridge_test_msgs::msg::TestNestedBoundedArray & ros_message)
{
  // Member: data
  rosbridge_test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.data);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbridge_test_msgs
get_serialized_size(
  const rosbridge_test_msgs::msg::TestNestedBoundedArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: data

  current_alignment +=
    rosbridge_test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.data, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbridge_test_msgs
max_serialized_size_TestNestedBoundedArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rosbridge_test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TestFloat32BoundedArray(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TestNestedBoundedArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rosbridge_test_msgs::msg::TestNestedBoundedArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TestNestedBoundedArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosbridge_test_msgs::msg::TestNestedBoundedArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TestNestedBoundedArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosbridge_test_msgs::msg::TestNestedBoundedArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TestNestedBoundedArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TestNestedBoundedArray(full_bounded, 0);
}

static message_type_support_callbacks_t _TestNestedBoundedArray__callbacks = {
  "rosbridge_test_msgs::msg",
  "TestNestedBoundedArray",
  _TestNestedBoundedArray__cdr_serialize,
  _TestNestedBoundedArray__cdr_deserialize,
  _TestNestedBoundedArray__get_serialized_size,
  _TestNestedBoundedArray__max_serialized_size
};

static rosidl_message_type_support_t _TestNestedBoundedArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TestNestedBoundedArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rosbridge_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::msg::TestNestedBoundedArray>()
{
  return &rosbridge_test_msgs::msg::typesupport_fastrtps_cpp::_TestNestedBoundedArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, msg, TestNestedBoundedArray)() {
  return &rosbridge_test_msgs::msg::typesupport_fastrtps_cpp::_TestNestedBoundedArray__handle;
}

#ifdef __cplusplus
}
#endif
