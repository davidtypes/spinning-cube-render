//
// Created by David Valenzuela on 3/10/24.
//

#include "../header/Matrix3D.h"

Matrix3D::Matrix3D(sf::Vector3f vec1, sf::Vector3f vec2, sf::Vector3f vec3)
    : num11(vec1.x), num12(vec1.y), num13(vec1.z),
    num21(vec2.x), num22(vec2.y), num23(vec2.z),
    num31(vec3.x), num32(vec3.y), num33(vec3.z) {}