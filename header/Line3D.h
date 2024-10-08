//
// Created by David Valenzuela on 3/10/24.
//

#ifndef SFMLPLAYGROUND_LINE3D_H
#define SFMLPLAYGROUND_LINE3D_H

#include "SFML/Graphics.hpp"
#include "Matrix3D.h"

class Line3D {
public:
    Line3D(sf::Vector3f, sf::Vector3f, float, float, float);

    void incAngle(float);

    sf::Vertex line[2];
    sf::Vector3f getEndLine();
    void setOrigin(sf::Vector3f);


private:
    sf::Vector3f origin;
    sf::Vector3f size;
    sf::Vector3f endOfLine;
    sf::Vector3f delta;
    float azimuthal;
    float radial;
    float direction;

    void update();
};


#endif //SFMLPLAYGROUND_LINE3D_H
