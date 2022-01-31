
/*
==========================================
  Copyright (c) 2016-2021 dynamic_static
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/math/camera.hpp"
#include "dynamic_static/math/glm.hpp"

namespace dst {
namespace math {

class FreeCameraController
    : public Camera::Controller
{
public:
    struct UpdateInfo
    {
        float deltaTime { };
        bool moveUp { };
        bool moveDown { };
        bool moveLeft { };
        bool moveRight { };
        bool moveForward { };
        bool moveBackward { };
        float moveSpeedMultiplier { 1 };
        glm::vec2 lookDelta { };
        float fieldOfViewDelta { };
    };

    void update(const UpdateInfo& updateInfo);

    bool moveEnabled { true };
    float moveSpeed { 4.2f };
    bool lookEnabled { true };
    glm::vec2 lookSpeed { 8.8f, 8.8f };
    float verticalLookMin { -glm::radians(90.0f) };
    float verticalLookMax { glm::radians(90.0f) };
    bool fieldOfViewEnabled { true };
    float fieldOfViewSpeed { 0.5f };
    float fieldOfViewMin { 20 };
    float fieldOfViewMax { 120 };

private:
    float mVerticalLook { };
};

} // namespace math
} // namespace dst
