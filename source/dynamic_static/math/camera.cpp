
/*
==========================================
  Copyright (c) 2016-2021 dynamic_static
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/math/camera.hpp"

namespace dst {
namespace math {

Camera::Controller::~Controller()
{
}

glm::mat4 Camera::view() const
{
    return glm::lookAt(transform.translation, transform.translation + transform.forward(), transform.up());
}

glm::mat4 Camera::projection() const
{
    return flip_y(glm::perspective(glm::radians(fieldOfView), aspectRatio, nearPlane, farPlane));
}

} // namespace math
} // namespace dst
