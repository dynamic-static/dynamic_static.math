
/*
==========================================
  Copyright (c) 2016-2021 dynamic_static
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/math/glm.hpp"
#include "dynamic_static/math/transform.hpp"

namespace dst {
namespace math {

struct Camera
{
    static constexpr float DefaultAspecRatio { 16.0f / 9.0f };
    static constexpr float DefaultFieldOfView { 60 };
    static constexpr float DefaultNearPlane { 0.001f };
    static constexpr float DefaultFarPlane { 100.0f };

    class Controller
    {
    public:
        virtual ~Controller() = 0;
        Camera* pCamera { nullptr };
    };

    glm::mat4 view() const;
    glm::mat4 projection() const;

    Transform transform { };
    float aspectRatio { DefaultAspecRatio };
    float fieldOfView { DefaultFieldOfView };
    float nearPlane { DefaultNearPlane };
    float farPlane { DefaultFarPlane };
};

} // namespace math
} // namespace dst
