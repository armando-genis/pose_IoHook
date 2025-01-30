// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi_msgs:srv/GetParam.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__GET_PARAM__FUNCTIONS_H_
#define ROSAPI_MSGS__SRV__GET_PARAM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "rosapi_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosapi_msgs/srv/get_param__struct.h"

/// Initialize srv/GetParam message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosapi_msgs__srv__GetParam_Request
 * )) before or use
 * rosapi_msgs__srv__GetParam_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
bool
rosapi_msgs__srv__GetParam_Request__init(rosapi_msgs__srv__GetParam_Request * msg);

/// Finalize srv/GetParam message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
void
rosapi_msgs__srv__GetParam_Request__fini(rosapi_msgs__srv__GetParam_Request * msg);

/// Create srv/GetParam message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosapi_msgs__srv__GetParam_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
rosapi_msgs__srv__GetParam_Request *
rosapi_msgs__srv__GetParam_Request__create();

/// Destroy srv/GetParam message.
/**
 * It calls
 * rosapi_msgs__srv__GetParam_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
void
rosapi_msgs__srv__GetParam_Request__destroy(rosapi_msgs__srv__GetParam_Request * msg);


/// Initialize array of srv/GetParam messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosapi_msgs__srv__GetParam_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
bool
rosapi_msgs__srv__GetParam_Request__Sequence__init(rosapi_msgs__srv__GetParam_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetParam messages.
/**
 * It calls
 * rosapi_msgs__srv__GetParam_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
void
rosapi_msgs__srv__GetParam_Request__Sequence__fini(rosapi_msgs__srv__GetParam_Request__Sequence * array);

/// Create array of srv/GetParam messages.
/**
 * It allocates the memory for the array and calls
 * rosapi_msgs__srv__GetParam_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
rosapi_msgs__srv__GetParam_Request__Sequence *
rosapi_msgs__srv__GetParam_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetParam messages.
/**
 * It calls
 * rosapi_msgs__srv__GetParam_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
void
rosapi_msgs__srv__GetParam_Request__Sequence__destroy(rosapi_msgs__srv__GetParam_Request__Sequence * array);

/// Initialize srv/GetParam message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosapi_msgs__srv__GetParam_Response
 * )) before or use
 * rosapi_msgs__srv__GetParam_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
bool
rosapi_msgs__srv__GetParam_Response__init(rosapi_msgs__srv__GetParam_Response * msg);

/// Finalize srv/GetParam message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
void
rosapi_msgs__srv__GetParam_Response__fini(rosapi_msgs__srv__GetParam_Response * msg);

/// Create srv/GetParam message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosapi_msgs__srv__GetParam_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
rosapi_msgs__srv__GetParam_Response *
rosapi_msgs__srv__GetParam_Response__create();

/// Destroy srv/GetParam message.
/**
 * It calls
 * rosapi_msgs__srv__GetParam_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
void
rosapi_msgs__srv__GetParam_Response__destroy(rosapi_msgs__srv__GetParam_Response * msg);


/// Initialize array of srv/GetParam messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosapi_msgs__srv__GetParam_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
bool
rosapi_msgs__srv__GetParam_Response__Sequence__init(rosapi_msgs__srv__GetParam_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetParam messages.
/**
 * It calls
 * rosapi_msgs__srv__GetParam_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
void
rosapi_msgs__srv__GetParam_Response__Sequence__fini(rosapi_msgs__srv__GetParam_Response__Sequence * array);

/// Create array of srv/GetParam messages.
/**
 * It allocates the memory for the array and calls
 * rosapi_msgs__srv__GetParam_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
rosapi_msgs__srv__GetParam_Response__Sequence *
rosapi_msgs__srv__GetParam_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetParam messages.
/**
 * It calls
 * rosapi_msgs__srv__GetParam_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
void
rosapi_msgs__srv__GetParam_Response__Sequence__destroy(rosapi_msgs__srv__GetParam_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI_MSGS__SRV__GET_PARAM__FUNCTIONS_H_
