//
// Created by David Valenzuela on 3/10/24.
//

#ifndef SFMLPLAYGROUND_MATRIX3D_H
#define SFMLPLAYGROUND_MATRIX3D_H

#include "SFML/Graphics.hpp"

class Matrix3D {
public:
    Matrix3D() = default;
    Matrix3D(sf::Vector3f, sf::Vector3f, sf::Vector3f);

    float num11 = 0;
    float num12 = 0;
    float num13 = 0;
    float num21 = 0;
    float num22 = 0;
    float num23 = 0;
    float num31 = 0;
    float num32 = 0;
    float num33 = 0;
};


#endif //SFMLPLAYGROUND_MATRIX3D_H
