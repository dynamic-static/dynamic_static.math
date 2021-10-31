/*
==========================================
  Copyright (c) 2011-2021 dynamic_ctatic
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/core/defines.hpp"

#define GLM_FORCE_RADIANS
#define GLM_FORCE_SIZE_T_LENGTH
#define GLM_ENABLE_EXPERIMENTAL
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#ifdef DYNAMIC_STATIC_COMPILER_MSVC
#pragma warning(push, 0)
#endif
#include "glm/glm.hpp"
#include "glm/gtc/quaternion.hpp"
#include "glm/gtx/compatibility.hpp"
#include "glm/gtx/norm.hpp"
#include "glm/gtx/quaternion.hpp"
#include "glm/gtx/string_cast.hpp"
#include "glm/gtx/transform.hpp"
#ifdef DYNAMIC_STATIC_COMPILER_MSVC
#pragma warning(pop)
#endif

#define _USE_MATH_DEFINES
#include <cmath>

template <typename GlmVectorType>
inline constexpr GlmVectorType unit_x()
{
    return GlmVectorType { 1 };
}

template <typename GlmVectorType>
inline constexpr GlmVectorType unit_y()
{
    return GlmVectorType { 0, 1 };
}

template <typename GlmVectorType>
inline constexpr GlmVectorType unit_z()
{
    return GlmVectorType { 0, 0, 1 };
}

template <typename GlmVectorType, typename ReturnType = float>
inline ReturnType aspect_ratio(const GlmVectorType& vector)
{
    auto width = (double)vector[0];
    auto height = (double)vector[1];
    return (ReturnType)(height != 0.0 ? width / height : 0.0);
}
