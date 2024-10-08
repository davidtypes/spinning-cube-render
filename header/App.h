//
// Created by David Valenzuela on 3/9/24.
//

#ifndef SFMLPLAYGROUND_APP_H
#define SFMLPLAYGROUND_APP_H

#include <vector>
#include "SFML/Graphics.hpp"
#include "Line.h"
#include "Line3D.h"

typedef std::vector<Line3D> Line3DVector;

class App {
private:
    int m_currentFrame = 0;
    float m_angle = 0.01;
    bool m_running = true;
    sf::RenderWindow m_window;

    Line3DVector lineVector;

    const sf::Vector2f origin = sf::Vector2f(800, 400);
    const sf::Vector2f size = sf::Vector2f(100, 0);

    sf::Vector3f origin3D = sf::Vector3f(800, 400, 0);
    sf::Vector3f velocity3D = sf::Vector3f(2, 2, 0);

    Line theLine = Line(origin, size, 0);
    Line theLine2 = Line(theLine.getEndLine(), size, 90 * M_PI / 180);
    Line theLine3 = Line(theLine2.getEndLine(), size, 180 * M_PI / 180);
    Line theLine4 = Line(theLine3.getEndLine(), size, 270 * M_PI / 180);

    Line3D the3DLine = Line3D(sf::Vector3f(origin.x, origin.y, 0),
                              sf::Vector3f(size.x, size.y, 0),
                              0, 0, 0);
    Line3D the3DLine2 = Line3D(the3DLine.getEndLine(),
                              sf::Vector3f(0, 100, 0),
                              0, 0, 0);
    Line3D the3DLine3 = Line3D(the3DLine2.getEndLine(),
                               sf::Vector3f(-100, 0, 0),
                               0, 0, 0);
    Line3D the3DLine4 = Line3D(the3DLine3.getEndLine(),
                               sf::Vector3f(0, -100, 0),
                               0, 0, 0);
    Line3D the3DLine5 = Line3D(the3DLine.getEndLine(),
                               sf::Vector3f(0, 0, -100),
                               0, 0, 0);
    Line3D the3DLine6 = Line3D(the3DLine4.getEndLine(),
                               sf::Vector3f(0, 0, -100),
                               0, 0, 0);
    Line3D the3DLine7 = Line3D(the3DLine2.getEndLine(),
                               sf::Vector3f(0, 0, -100),
                               0, 0, 0);
    Line3D the3DLine8 = Line3D(the3DLine7.getEndLine(),
                               sf::Vector3f(0, -100, 0),
                               0, 0, 0);
    Line3D the3DLine9 = Line3D(the3DLine5.getEndLine(),
                               sf::Vector3f(-100, 0, 0),
                               0, 0, 0);
    Line3D the3DLine10 = Line3D(the3DLine6.getEndLine(),
                               sf::Vector3f(0, 100, 0),
                               0, 0, 0);
    Line3D the3DLine11 = Line3D(the3DLine10.getEndLine(),
                                sf::Vector3f(100, 0, 0),
                                0, 0, 0);
    Line3D the3DLine12 = Line3D(the3DLine10.getEndLine(),
                                sf::Vector3f(0, 0, 100),
                                0, 0, 0);


    void sRender();
    void sEventListener();
    void sSpinny();

    void init();

public:
    App();
    void run();
};


#endif //SFMLPLAYGROUND_APP_H
