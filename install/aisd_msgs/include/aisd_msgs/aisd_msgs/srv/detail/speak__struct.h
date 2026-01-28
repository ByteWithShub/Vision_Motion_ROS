// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aisd_msgs:srv/Speak.idl
// generated code does not contain a copyright notice

#ifndef AISD_MSGS__SRV__DETAIL__SPEAK__STRUCT_H_
#define AISD_MSGS__SRV__DETAIL__SPEAK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'words'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Speak in the package aisd_msgs.
typedef struct aisd_msgs__srv__Speak_Request
{
  rosidl_runtime_c__String words;
} aisd_msgs__srv__Speak_Request;

// Struct for a sequence of aisd_msgs__srv__Speak_Request.
typedef struct aisd_msgs__srv__Speak_Request__Sequence
{
  aisd_msgs__srv__Speak_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aisd_msgs__srv__Speak_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Speak in the package aisd_msgs.
typedef struct aisd_msgs__srv__Speak_Response
{
  rosidl_runtime_c__String response;
} aisd_msgs__srv__Speak_Response;

// Struct for a sequence of aisd_msgs__srv__Speak_Response.
typedef struct aisd_msgs__srv__Speak_Response__Sequence
{
  aisd_msgs__srv__Speak_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aisd_msgs__srv__Speak_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AISD_MSGS__SRV__DETAIL__SPEAK__STRUCT_H_
