//
// Created by David Valenzuela on 3/10/24.
//

#ifndef SFMLPLAYGROUND_LINE_H
#define SFMLPLAYGROUND_LINE_H

#include "SFML/Graphics.hpp"
#include <cmath>

class Line {
public:
    Line(sf::Vector2f, sf::Vector2f, float);

    void setOrigin(sf::Vector2f);
    void setSize(sf::Vector2f);
    void incAngle(float);
    sf::Vector2f getEndLine();

    sf::Vertex line[2];

private:
    void update();

    sf::Vector2f origin;
    sf::Vector2f size;
    sf::Vector2f endOfLine;
    sf::Vector2f delta;

    float direction; //0 is pointing along positive x-axis
};


#endif //SFMLPLAYGROUND_LINE_H
