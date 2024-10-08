//
// Created by David Valenzuela on 3/10/24.
//

#ifndef SFMLPLAYGROUND_OTHERFUNCTIONS_H
#define SFMLPLAYGROUND_OTHERFUNCTIONS_H

#include <cmath>
#include "SFML/Graphics.hpp"
#include "Matrix3D.h"


sf::Vector3f matrixMultiply(sf::Vector3f vector, Matrix3D matrix)
{
    return sf::Vector3f(vector.x * matrix.num11 + vector.y * matrix.num12 + vector.z * matrix.num13,
                        vector.x * matrix.num21 + vector.y * matrix.num22 + vector.z * matrix.num23,
                        vector.x * matrix.num31 + vector.y * matrix.num32 + vector.z * matrix.num33);
}


#endif //SFMLPLAYGROUND_OTHERFUNCTIONS_H