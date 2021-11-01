
/*
==========================================
  Copyright (c) 2011-2021 dynamic_static
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/math/camera.hpp"
#include "dynamic_static/math/glm.hpp"
#include "dynamic_static/math/transform.hpp"

#include <algorithm>
#define _USE_MATH_DEFINES
#include <cmath>

namespace dst {
namespace math {

template <typename VecType = glm::vec3>
inline constexpr VecType unit_x()
{
    return VecType { 1 };
}

template <typename VecType = glm::vec3>
inline constexpr VecType unit_y()
{
    return VecType { 0, 1 };
}

template <typename VecType = glm::vec3>
inline constexpr VecType unit_z()
{
    return VecType { 0, 0, 1 };
}

template <typename T>
inline T aspect_ratio(const T& width, const T& height)
{
    return height ? width / height : 0;
}

template <typename T>
inline const T& clamp(const T& value, const T& min, const T& max)
{
    return std::max(min, std::min(value, max));
}

template <typename T>
inline T lerp(T v0, T v1, T t)
{
    /*
    FROM : https://devblogs.nvidia.com/parallelforall/lerp-faster-cuda/
    TLDR : std::fma() (fused multiply-add) is commonly implemented as a single CPU
        instruction which will be used if available.  In addition to a performance
        benefit, accuracy is improved since there's no rounding performed until
        std::fma() returns.

        In this lerp function there are 4 rounding errors...
            (1 - t) * v0 + t * v1

        This version has 3 rounding errors and no guarantee that the result equals v1
        when t equals 1 due to rounding error...
            v0 + t * (v1 - v0)

        std::fma() computes...
            x * y + z
        ...so the operation is...
            t * v1 + (-t * v0 + v0)
    */
    return std::fma(t, v1, std::fma(-t, v0, v0));
}

template <typename ReturnType, typename T>
inline ReturnType round_cast(const T& value)
{
    return static_cast<ReturnType>(std::round(value));
}

} // namespace math
} // namespace dst
