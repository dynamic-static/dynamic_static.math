
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
    static constexpr float DefaultMoveEnabled { true };
    static constexpr float DefaultMoveSpeed { 4.2f };
    static constexpr bool DefaultLookEnabled { true };
    static constexpr glm::vec2 DefaultLookSpeed { 8.8f, 8.8f };
    static constexpr float DefaultVerticalLookMin { -glm::radians(90.0f) };
    static constexpr float DefaultVerticalLookMax { glm::radians(90.0f) };
    static constexpr bool DefaultFieldOfViewEnabled { true };
    static constexpr float DefaultFieldOfViewSpeed { 0.5f };
    static constexpr float DefaultFieldOfViewMin { 20 };
    static constexpr float DefaultFieldOfViewMax { 120 };

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

    bool moveEnabled { DefaultMoveEnabled };
    float moveSpeed { DefaultMoveSpeed };
    bool lookEnabled { DefaultLookEnabled };
    glm::vec2 lookSpeed { DefaultLookSpeed };
    float verticalLookMin { DefaultVerticalLookMin };
    float verticalLookMax { DefaultVerticalLookMax };
    bool fieldOfViewEnabled { DefaultFieldOfViewEnabled };
    float fieldOfViewSpeed { DefaultFieldOfViewSpeed };
    float fieldOfViewMin { DefaultFieldOfViewMin };
    float fieldOfViewMax { DefaultFieldOfViewMax };

private:
    float mVerticalLook { };
};

} // namespace math
} // namespace dst
