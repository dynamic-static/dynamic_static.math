
/*
==========================================
  Copyright (c) 2016-2021 dynamic_static
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/math/defines.hpp"
#include "dynamic_static/math/glm.hpp"

#include <iostream>

namespace dst {
namespace math {

struct Transform
{
    inline glm::mat4 world_from_local() const
    {
        return glm::translate(translation) * glm::toMat4(rotation) * glm::scale(scale);
    }

    inline glm::mat4 local_from_world() const
    {
        return glm::transpose(world_from_local());
    }

    inline glm::vec3 up() const
    {
        return glm::normalize(rotation * math::up());
    }

    inline glm::vec3 down() const
    {
        return glm::normalize(rotation * math::down());
    }

    inline glm::vec3 left() const
    {
        return glm::normalize(rotation * math::left());
    }

    inline glm::vec3 right() const
    {
        return glm::normalize(rotation * math::right());
    }

    inline glm::vec3 forward() const
    {
        return glm::normalize(rotation * math::forward());
    }

    inline glm::vec3 backward() const
    {
        return glm::normalize(rotation * math::backward());
    }

    glm::vec3 translation { };
    glm::quat rotation { 1, 0, 0, 0 };
    glm::vec3 scale { 1, 1, 1 };
};

} // namespace math
} // namespace dst
