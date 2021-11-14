
/*
==========================================
  Copyright (c) 2011-2021 dynamic_static
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/math/glm.hpp"

#include <algorithm>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iosfwd>

#include <iostream>
#include <string>
#include <sstream>

namespace dst {
namespace math {

template <typename VecType = glm::vec3>
inline constexpr VecType unit_x()
{
    VecType vec { };
    vec.x = 1;
    return vec;
}

template <typename VecType = glm::vec3>
inline constexpr VecType unit_y()
{
    VecType vec { };
    vec.y = 1;
    return vec;
}

template <typename VecType = glm::vec3>
inline constexpr VecType unit_z()
{
    VecType vec { };
    vec.z = 1;
    return vec;
}

template <typename VecType = glm::vec3>
inline constexpr VecType up()
{
    return unit_y<VecType>();
}

template <typename VecType = glm::vec3>
inline constexpr VecType down()
{
    return -unit_y<VecType>();
}

template <typename VecType = glm::vec3>
inline constexpr VecType left()
{
    return unit_x<VecType>();
}

template <typename VecType = glm::vec3>
inline constexpr VecType right()
{
    return -unit_x<VecType>();
}

template <typename VecType = glm::vec3>
inline constexpr VecType forward()
{
    return unit_z<VecType>();
}

template <typename VecType = glm::vec3>
inline constexpr VecType backward()
{
    return -unit_z<VecType>();
}

inline glm::mat4 flip_y(glm::mat4 matrix)
{
    matrix[1][1] *= -1;
    return matrix;
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

// inline std::string to_string(const glm::vec3& vec3)
// {
//     return "{ " + std::to_string(vec3.x) + ", " + std::to_string(vec3.y) + ", " + std::to_string(vec3.z) + " }";
// }
// 
// inline std::string to_string(const glm::quat& quat)
// {
//     return "{ " + std::to_string(quat.x) + ", " + std::to_string(quat.y) + ", " + std::to_string(quat.z) + ", " + std::to_string(quat.w) + " }";
// }

} // namespace math
} // namespace dst
