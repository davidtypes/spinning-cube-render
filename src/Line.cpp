//
// Created by David Valenzuela on 3/10/24.
//

#include "Line.h"

Line::Line(sf::Vector2f origin, sf::Vector2f size, float direction)
    : origin(origin), size(size), endOfLine(origin + size), direction(direction) {
    update();
}

void Line::setOrigin(sf::Vector2f origin) {
    this->origin = origin;
    update();
}

void Line::setSize(sf::Vector2f size) {
    this->size = size;
    update();
}


void Line::incAngle(float angle) {
    direction += angle;
    update();
}

void Line::update() {
    delta = sf::Vector2f(size.x * cos(direction) + size.y * sin(direction),
                         -1 * size.x * sin(direction) + size.y * cos(direction));
    line[0] = origin;
    line[1] = origin + delta;
    endOfLine = origin + delta;
}

sf::Vector2f Line::getEndLine() {
    return endOfLine;
}
