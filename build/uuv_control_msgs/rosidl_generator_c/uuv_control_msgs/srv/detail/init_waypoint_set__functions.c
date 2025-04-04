// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_control_msgs:srv/InitWaypointSet.idl
// generated code does not contain a copyright notice
#include "uuv_control_msgs/srv/detail/init_waypoint_set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `start_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `waypoints`
#include "uuv_control_msgs/msg/detail/waypoint__functions.h"
// Member `interpolator`
#include "std_msgs/msg/detail/string__functions.h"

bool
uuv_control_msgs__srv__InitWaypointSet_Request__init(uuv_control_msgs__srv__InitWaypointSet_Request * msg)
{
  if (!msg) {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__init(&msg->start_time)) {
    uuv_control_msgs__srv__InitWaypointSet_Request__fini(msg);
    return false;
  }
  // start_now
  // waypoints
  if (!uuv_control_msgs__msg__Waypoint__Sequence__init(&msg->waypoints, 0)) {
    uuv_control_msgs__srv__InitWaypointSet_Request__fini(msg);
    return false;
  }
  // max_forward_speed
  // heading_offset
  // interpolator
  if (!std_msgs__msg__String__init(&msg->interpolator)) {
    uuv_control_msgs__srv__InitWaypointSet_Request__fini(msg);
    return false;
  }
  return true;
}

void
uuv_control_msgs__srv__InitWaypointSet_Request__fini(uuv_control_msgs__srv__InitWaypointSet_Request * msg)
{
  if (!msg) {
    return;
  }
  // start_time
  builtin_interfaces__msg__Time__fini(&msg->start_time);
  // start_now
  // waypoints
  uuv_control_msgs__msg__Waypoint__Sequence__fini(&msg->waypoints);
  // max_forward_speed
  // heading_offset
  // interpolator
  std_msgs__msg__String__fini(&msg->interpolator);
}

bool
uuv_control_msgs__srv__InitWaypointSet_Request__are_equal(const uuv_control_msgs__srv__InitWaypointSet_Request * lhs, const uuv_control_msgs__srv__InitWaypointSet_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start_time), &(rhs->start_time)))
  {
    return false;
  }
  // start_now
  if (lhs->start_now != rhs->start_now) {
    return false;
  }
  // waypoints
  if (!uuv_control_msgs__msg__Waypoint__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  // max_forward_speed
  if (lhs->max_forward_speed != rhs->max_forward_speed) {
    return false;
  }
  // heading_offset
  if (lhs->heading_offset != rhs->heading_offset) {
    return false;
  }
  // interpolator
  if (!std_msgs__msg__String__are_equal(
      &(lhs->interpolator), &(rhs->interpolator)))
  {
    return false;
  }
  return true;
}

bool
uuv_control_msgs__srv__InitWaypointSet_Request__copy(
  const uuv_control_msgs__srv__InitWaypointSet_Request * input,
  uuv_control_msgs__srv__InitWaypointSet_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start_time), &(output->start_time)))
  {
    return false;
  }
  // start_now
  output->start_now = input->start_now;
  // waypoints
  if (!uuv_control_msgs__msg__Waypoint__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  // max_forward_speed
  output->max_forward_speed = input->max_forward_speed;
  // heading_offset
  output->heading_offset = input->heading_offset;
  // interpolator
  if (!std_msgs__msg__String__copy(
      &(input->interpolator), &(output->interpolator)))
  {
    return false;
  }
  return true;
}

uuv_control_msgs__srv__InitWaypointSet_Request *
uuv_control_msgs__srv__InitWaypointSet_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__srv__InitWaypointSet_Request * msg = (uuv_control_msgs__srv__InitWaypointSet_Request *)allocator.allocate(sizeof(uuv_control_msgs__srv__InitWaypointSet_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_control_msgs__srv__InitWaypointSet_Request));
  bool success = uuv_control_msgs__srv__InitWaypointSet_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_control_msgs__srv__InitWaypointSet_Request__destroy(uuv_control_msgs__srv__InitWaypointSet_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_control_msgs__srv__InitWaypointSet_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_control_msgs__srv__InitWaypointSet_Request__Sequence__init(uuv_control_msgs__srv__InitWaypointSet_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__srv__InitWaypointSet_Request * data = NULL;

  if (size) {
    data = (uuv_control_msgs__srv__InitWaypointSet_Request *)allocator.zero_allocate(size, sizeof(uuv_control_msgs__srv__InitWaypointSet_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_control_msgs__srv__InitWaypointSet_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_control_msgs__srv__InitWaypointSet_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
uuv_control_msgs__srv__InitWaypointSet_Request__Sequence__fini(uuv_control_msgs__srv__InitWaypointSet_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_control_msgs__srv__InitWaypointSet_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

uuv_control_msgs__srv__InitWaypointSet_Request__Sequence *
uuv_control_msgs__srv__InitWaypointSet_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__srv__InitWaypointSet_Request__Sequence * array = (uuv_control_msgs__srv__InitWaypointSet_Request__Sequence *)allocator.allocate(sizeof(uuv_control_msgs__srv__InitWaypointSet_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_control_msgs__srv__InitWaypointSet_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_control_msgs__srv__InitWaypointSet_Request__Sequence__destroy(uuv_control_msgs__srv__InitWaypointSet_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_control_msgs__srv__InitWaypointSet_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_control_msgs__srv__InitWaypointSet_Request__Sequence__are_equal(const uuv_control_msgs__srv__InitWaypointSet_Request__Sequence * lhs, const uuv_control_msgs__srv__InitWaypointSet_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_control_msgs__srv__InitWaypointSet_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_control_msgs__srv__InitWaypointSet_Request__Sequence__copy(
  const uuv_control_msgs__srv__InitWaypointSet_Request__Sequence * input,
  uuv_control_msgs__srv__InitWaypointSet_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_control_msgs__srv__InitWaypointSet_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uuv_control_msgs__srv__InitWaypointSet_Request * data =
      (uuv_control_msgs__srv__InitWaypointSet_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_control_msgs__srv__InitWaypointSet_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uuv_control_msgs__srv__InitWaypointSet_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uuv_control_msgs__srv__InitWaypointSet_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
uuv_control_msgs__srv__InitWaypointSet_Response__init(uuv_control_msgs__srv__InitWaypointSet_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
uuv_control_msgs__srv__InitWaypointSet_Response__fini(uuv_control_msgs__srv__InitWaypointSet_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
uuv_control_msgs__srv__InitWaypointSet_Response__are_equal(const uuv_control_msgs__srv__InitWaypointSet_Response * lhs, const uuv_control_msgs__srv__InitWaypointSet_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
uuv_control_msgs__srv__InitWaypointSet_Response__copy(
  const uuv_control_msgs__srv__InitWaypointSet_Response * input,
  uuv_control_msgs__srv__InitWaypointSet_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

uuv_control_msgs__srv__InitWaypointSet_Response *
uuv_control_msgs__srv__InitWaypointSet_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__srv__InitWaypointSet_Response * msg = (uuv_control_msgs__srv__InitWaypointSet_Response *)allocator.allocate(sizeof(uuv_control_msgs__srv__InitWaypointSet_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_control_msgs__srv__InitWaypointSet_Response));
  bool success = uuv_control_msgs__srv__InitWaypointSet_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_control_msgs__srv__InitWaypointSet_Response__destroy(uuv_control_msgs__srv__InitWaypointSet_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_control_msgs__srv__InitWaypointSet_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_control_msgs__srv__InitWaypointSet_Response__Sequence__init(uuv_control_msgs__srv__InitWaypointSet_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__srv__InitWaypointSet_Response * data = NULL;

  if (size) {
    data = (uuv_control_msgs__srv__InitWaypointSet_Response *)allocator.zero_allocate(size, sizeof(uuv_control_msgs__srv__InitWaypointSet_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_control_msgs__srv__InitWaypointSet_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_control_msgs__srv__InitWaypointSet_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
uuv_control_msgs__srv__InitWaypointSet_Response__Sequence__fini(uuv_control_msgs__srv__InitWaypointSet_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_control_msgs__srv__InitWaypointSet_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

uuv_control_msgs__srv__InitWaypointSet_Response__Sequence *
uuv_control_msgs__srv__InitWaypointSet_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__srv__InitWaypointSet_Response__Sequence * array = (uuv_control_msgs__srv__InitWaypointSet_Response__Sequence *)allocator.allocate(sizeof(uuv_control_msgs__srv__InitWaypointSet_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_control_msgs__srv__InitWaypointSet_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_control_msgs__srv__InitWaypointSet_Response__Sequence__destroy(uuv_control_msgs__srv__InitWaypointSet_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_control_msgs__srv__InitWaypointSet_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_control_msgs__srv__InitWaypointSet_Response__Sequence__are_equal(const uuv_control_msgs__srv__InitWaypointSet_Response__Sequence * lhs, const uuv_control_msgs__srv__InitWaypointSet_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_control_msgs__srv__InitWaypointSet_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_control_msgs__srv__InitWaypointSet_Response__Sequence__copy(
  const uuv_control_msgs__srv__InitWaypointSet_Response__Sequence * input,
  uuv_control_msgs__srv__InitWaypointSet_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_control_msgs__srv__InitWaypointSet_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uuv_control_msgs__srv__InitWaypointSet_Response * data =
      (uuv_control_msgs__srv__InitWaypointSet_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_control_msgs__srv__InitWaypointSet_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uuv_control_msgs__srv__InitWaypointSet_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uuv_control_msgs__srv__InitWaypointSet_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
