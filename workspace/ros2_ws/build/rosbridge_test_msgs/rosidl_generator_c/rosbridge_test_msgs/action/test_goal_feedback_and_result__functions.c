// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosbridge_test_msgs:action/TestGoalFeedbackAndResult.idl
// generated code does not contain a copyright notice
#include "rosbridge_test_msgs/action/test_goal_feedback_and_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal * msg)
{
  if (!msg) {
    return;
  }
  // data
}

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__create()
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal * msg = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal));
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal * msg)
{
  if (msg) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__fini(msg);
  }
  free(msg);
}


bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal * data = NULL;
  if (size) {
    data = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal *)calloc(size, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__create(size_t size)
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence * array = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence * array)
{
  if (array) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result * msg)
{
  if (!msg) {
    return;
  }
  // data
}

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__create()
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result * msg = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result));
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result * msg)
{
  if (msg) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__fini(msg);
  }
  free(msg);
}


bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result * data = NULL;
  if (size) {
    data = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result *)calloc(size, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__create(size_t size)
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence * array = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence * array)
{
  if (array) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__Sequence__fini(array);
  }
  free(array);
}


bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // data
}

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__create()
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback * msg = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback));
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback * msg)
{
  if (msg) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__fini(msg);
  }
  free(msg);
}


bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback * data = NULL;
  if (size) {
    data = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback *)calloc(size, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__create(size_t size)
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence * array = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence * array)
{
  if (array) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `goal`
// already included above
// #include "rosbridge_test_msgs/action/test_goal_feedback_and_result__functions.h"

bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__init(&msg->goal)) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Goal__fini(&msg->goal);
}

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__create()
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request * msg = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request));
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request * msg)
{
  if (msg) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request * data = NULL;
  if (size) {
    data = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request *)calloc(size, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__create(size_t size)
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence * array = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence * array)
{
  if (array) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time__functions.h"

bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__create()
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response * msg = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response));
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response * msg)
{
  if (msg) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response * data = NULL;
  if (size) {
    data = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response *)calloc(size, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__create(size_t size)
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence * array = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence * array)
{
  if (array) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"

bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__create()
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request * msg = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request));
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request * msg)
{
  if (msg) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request * data = NULL;
  if (size) {
    data = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request *)calloc(size, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__create(size_t size)
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence * array = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence * array)
{
  if (array) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "rosbridge_test_msgs/action/test_goal_feedback_and_result__functions.h"

bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__init(&msg->result)) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Result__fini(&msg->result);
}

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__create()
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response * msg = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response));
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response * msg)
{
  if (msg) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response * data = NULL;
  if (size) {
    data = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response *)calloc(size, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__create(size_t size)
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence * array = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence * array)
{
  if (array) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `feedback`
// already included above
// #include "rosbridge_test_msgs/action/test_goal_feedback_and_result__functions.h"

bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__init(&msg->feedback)) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_Feedback__fini(&msg->feedback);
}

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__create()
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage * msg = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage));
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage * msg)
{
  if (msg) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__init(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage * data = NULL;
  if (size) {
    data = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage *)calloc(size, sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__fini(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence *
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__create(size_t size)
{
  rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence * array = (rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence *)malloc(sizeof(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__destroy(rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence * array)
{
  if (array) {
    rosbridge_test_msgs__action__TestGoalFeedbackAndResult_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
