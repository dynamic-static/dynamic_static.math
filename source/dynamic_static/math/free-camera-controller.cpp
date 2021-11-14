
/*
==========================================
  Copyright (c) 2016-2021 dynamic_static
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/math/free-camera-controller.hpp"

namespace dst {
namespace math {

void FreeCameraController::update(const UpdateInfo& updateInfo)
{
    if (pCamera) {
        if (moveEnabled) {
            glm::vec3 move { };
            move += updateInfo.moveUp ? pCamera->transform.up() : glm::vec3 { };
            move += updateInfo.moveDown ? pCamera->transform.down() : glm::vec3 { };
            move += updateInfo.moveLeft ? pCamera->transform.left() : glm::vec3 { };
            move += updateInfo.moveRight ? pCamera->transform.right() : glm::vec3 { };
            move += updateInfo.moveForward ? pCamera->transform.forward() : glm::vec3 { };
            move += updateInfo.moveBackward ? pCamera->transform.backward() : glm::vec3 { };
            move = (move.x || move.y || move.z) ? glm::normalize(move) : glm::vec3 { };
            pCamera->transform.translation += move * moveSpeed * updateInfo.moveSpeedMultiplier * updateInfo.deltaTime;
        }
        if (lookEnabled) {
            auto look = updateInfo.lookDelta * lookSpeed * updateInfo.deltaTime;
            if (mVerticalLook + look.y > verticalLookMax) {
                look.y = verticalLookMax - mVerticalLook;
            } else
            if (mVerticalLook + look.y < verticalLookMin) {
                look.y = verticalLookMin - mVerticalLook;
            }
            mVerticalLook += look.y;
            auto horizontalRotation = glm::angleAxis(-look.x, unit_y());
            auto verticalRotation = glm::angleAxis(look.y, unit_x());
            pCamera->transform.rotation = glm::normalize(horizontalRotation * pCamera->transform.rotation * verticalRotation);
        }
        if (fieldOfViewEnabled) {
            pCamera->fieldOfView -= updateInfo.fieldOfViewDelta * fieldOfViewSpeed * updateInfo.deltaTime;
            pCamera->fieldOfView = glm::clamp(pCamera->fieldOfView, fieldOfViewMin, fieldOfViewMax);
        }
    }
}

} // namespace math
} // namespace dst
