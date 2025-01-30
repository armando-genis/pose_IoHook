// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosbridge_test_msgs:msg/TestNestedBoundedArray.idl
// generated code does not contain a copyright notice
#include "rosbridge_test_msgs/msg/test_nested_bounded_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data`
#include "rosbridge_test_msgs/msg/test_float32_bounded_array__functions.h"

bool
rosbridge_test_msgs__msg__TestNestedBoundedArray__init(rosbridge_test_msgs__msg__TestNestedBoundedArray * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosbridge_test_msgs__msg__TestFloat32BoundedArray__init(&msg->data)) {
    rosbridge_test_msgs__msg__TestNestedBoundedArray__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__msg__TestNestedBoundedArray__fini(rosbridge_test_msgs__msg__TestNestedBoundedArray * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosbridge_test_msgs__msg__TestFloat32BoundedArray__fini(&msg->data);
}

rosbridge_test_msgs__msg__TestNestedBoundedArray *
rosbridge_test_msgs__msg__TestNestedBoundedArray__create()
{
  rosbridge_test_msgs__msg__TestNestedBoundedArray * msg = (rosbridge_test_msgs__msg__TestNestedBoundedArray *)malloc(sizeof(rosbridge_test_msgs__msg__TestNestedBoundedArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__msg__TestNestedBoundedArray));
  bool success = rosbridge_test_msgs__msg__TestNestedBoundedArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__msg__TestNestedBoundedArray__destroy(rosbridge_test_msgs__msg__TestNestedBoundedArray * msg)
{
  if (msg) {
    rosbridge_test_msgs__msg__TestNestedBoundedArray__fini(msg);
  }
  free(msg);
}


bool
rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__init(rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosbridge_test_msgs__msg__TestNestedBoundedArray * data = NULL;
  if (size) {
    data = (rosbridge_test_msgs__msg__TestNestedBoundedArray *)calloc(size, sizeof(rosbridge_test_msgs__msg__TestNestedBoundedArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__msg__TestNestedBoundedArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__msg__TestNestedBoundedArray__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__fini(rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosbridge_test_msgs__msg__TestNestedBoundedArray__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence *
rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__create(size_t size)
{
  rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence * array = (rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence *)malloc(sizeof(rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__destroy(rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence * array)
{
  if (array) {
    rosbridge_test_msgs__msg__TestNestedBoundedArray__Sequence__fini(array);
  }
  free(array);
}
