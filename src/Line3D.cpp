//
// Created by David Valenzuela on 3/10/24.
//

#include "Line3D.h"
#include "OtherFunctions.h"
#include <cmath>

Line3D::Line3D(sf::Vector3f origin, sf::Vector3f size, float radial, float azimuthal, float direction)
    : origin(origin), size(size), radial(radial), azimuthal(azimuthal), direction(direction)
{
    update();
}

void Line3D::incAngle(float angle)
{
    direction += angle;
    update();
}

void Line3D::update()
{
    //x rotation:
    Matrix3D x_rot(sf::Vector3f(1, 0, 0),
                         sf::Vector3f(0, cos(direction),  -1 * sin(direction)),
                         sf::Vector3f(0, sin(direction),  cos(direction)));

    //y rotation:
    Matrix3D y_rot(sf::Vector3f(cos(direction), 0,  sin(direction)),
                         sf::Vector3f(0, 1, 0),
                         sf::Vector3f(-1 * sin(direction), 0, cos(direction)));

    //z rotation:
    Matrix3D z_rot(sf::Vector3f(cos(direction), sin(direction) * -1, 0),
                         sf::Vector3f(sin(direction), cos(direction), 0),
                         sf::Vector3f(0, 0, 1));

    delta = matrixMultiply(size, x_rot);
    delta = matrixMultiply(delta, y_rot);


    endOfLine = origin + delta;
    line[0] = sf::Vector2f(origin.x, origin.y);
    line[1] = sf::Vector2f(endOfLine.x, endOfLine.y);

}

void Line3D::setOrigin(sf::Vector3f origin)
{
    this->origin = origin;
    update();
}

sf::Vector3f Line3D::getEndLine()
{
    return endOfLine;
}