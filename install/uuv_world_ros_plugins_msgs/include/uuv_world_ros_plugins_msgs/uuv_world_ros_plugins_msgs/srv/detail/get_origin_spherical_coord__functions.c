// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_world_ros_plugins_msgs:srv/GetOriginSphericalCoord.idl
// generated code does not contain a copyright notice
#include "uuv_world_ros_plugins_msgs/srv/detail/get_origin_spherical_coord__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__init(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__fini(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__are_equal(const uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request * lhs, const uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__copy(
  const uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request * input,
  uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request *
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request * msg = (uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request *)allocator.allocate(sizeof(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request));
  bool success = uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__destroy(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence__init(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request * data = NULL;

  if (size) {
    data = (uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request *)allocator.zero_allocate(size, sizeof(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__fini(&data[i - 1]);
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
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence__fini(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence * array)
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
      uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__fini(&array->data[i]);
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

uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence *
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence * array = (uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence *)allocator.allocate(sizeof(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence__destroy(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence__are_equal(const uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence * lhs, const uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence__copy(
  const uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence * input,
  uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request * data =
      (uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__init(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response * msg)
{
  if (!msg) {
    return false;
  }
  // latitude_deg
  // longitude_deg
  // altitude
  return true;
}

void
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__fini(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response * msg)
{
  if (!msg) {
    return;
  }
  // latitude_deg
  // longitude_deg
  // altitude
}

bool
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__are_equal(const uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response * lhs, const uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // latitude_deg
  if (lhs->latitude_deg != rhs->latitude_deg) {
    return false;
  }
  // longitude_deg
  if (lhs->longitude_deg != rhs->longitude_deg) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  return true;
}

bool
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__copy(
  const uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response * input,
  uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // latitude_deg
  output->latitude_deg = input->latitude_deg;
  // longitude_deg
  output->longitude_deg = input->longitude_deg;
  // altitude
  output->altitude = input->altitude;
  return true;
}

uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response *
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response * msg = (uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response *)allocator.allocate(sizeof(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response));
  bool success = uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__destroy(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence__init(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response * data = NULL;

  if (size) {
    data = (uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response *)allocator.zero_allocate(size, sizeof(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__fini(&data[i - 1]);
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
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence__fini(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence * array)
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
      uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__fini(&array->data[i]);
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

uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence *
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence * array = (uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence *)allocator.allocate(sizeof(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence__destroy(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence__are_equal(const uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence * lhs, const uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence__copy(
  const uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence * input,
  uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response * data =
      (uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uuv_world_ros_plugins_msgs__srv__GetOriginSphericalCoord_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
