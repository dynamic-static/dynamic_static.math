
# ==========================================
#   Copyright (c) 2021 dynamic_static
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

cmake_minimum_required(VERSION 3.17 FATAL_ERROR)
project(dynamic_static.math)

################################################################################
# dependencies
set(external "${CMAKE_CURRENT_LIST_DIR}/external/")
include("${external}/glm.cmake")
string(REPLACE "\\" "/" DYNAMIC_STATIC "$ENV{DYNAMIC_STATIC}")
include("${external}/dynamic_static.build.cmake")

################################################################################
# dynamic_static.math
set(includeDirectory "${CMAKE_CURRENT_LIST_DIR}/include/")
set(includePath "${includeDirectory}/dynamic_static/")
set(sourcePath "${CMAKE_CURRENT_LIST_DIR}/source/dynamic_static/")
dst_add_static_library(
    target
        dynamic_static.math
    linkLibraries
        glm
    includeDirectories
        "${includeDirectory}"
    includeFiles
        "${includePath}/math/binpack.hpp"
        "${includePath}/math/camera.hpp"
        "${includePath}/math/color.hpp"
        "${includePath}/math/free-camera-controller.hpp"
        "${includePath}/math/defines.hpp"
        "${includePath}/math/glm.hpp"
        "${includePath}/math/transform.hpp"
        "${includePath}/math.hpp"
    sourceFiles
        "${sourcePath}/math/camera.cpp"
        "${sourcePath}/math/free-camera-controller.cpp"
        "${sourcePath}/math/transform.cpp"
)
