#include "../header/App.h"
#include <cmath>

App::App() {
    init();
}

void App::init() {
    m_window.create(sf::VideoMode(1600, 900), "tuvelo");

//    lineVector.push_back(the3DLine);
//    lineVector.push_back(the3DLine2);
//    lineVector.push_back(the3DLine3);
//    lineVector.push_back(the3DLine4);
//    lineVector.push_back(the3DLine5);
//    lineVector.push_back(the3DLine6);
//    lineVector.push_back(the3DLine7);
//    lineVector.push_back(the3DLine8);
//    lineVector.push_back(the3DLine9);
}

void App::run()
{
    while (m_running)
    {
        sSpinny();
        sRender();
        sEventListener();
        m_currentFrame++;
    }
}

void App::sRender()
{
    m_window.clear();
//    m_window.draw(theLine.line, 2, sf::Lines);
//    m_window.draw(theLine2.line, 2, sf::Lines);
//    m_window.draw(theLine3.line, 2, sf::Lines);
//    m_window.draw(theLine4.line, 2, sf::Lines);
    m_window.draw(the3DLine.line, 2, sf::Lines);
    m_window.draw(the3DLine2.line, 2, sf::Lines);
    m_window.draw(the3DLine3.line, 2, sf::Lines);
    m_window.draw(the3DLine4.line, 2, sf::Lines);
    m_window.draw(the3DLine5.line, 2, sf::Lines);
    m_window.draw(the3DLine6.line, 2, sf::Lines);
    m_window.draw(the3DLine7.line, 2, sf::Lines);
    m_window.draw(the3DLine8.line, 2, sf::Lines);
    m_window.draw(the3DLine9.line, 2, sf::Lines);
    m_window.draw(the3DLine10.line, 2, sf::Lines);
    m_window.draw(the3DLine11.line, 2, sf::Lines);
    m_window.draw(the3DLine12.line, 2, sf::Lines);



    m_window.display();
}

void App::sEventListener() {
    sf::Event event;
    while (m_window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            m_running = false;
        }
    }
}

void App::sSpinny() {
    if (m_currentFrame % 30 == 0)
    {
//        theLine.incAngle(m_angle);
//        theLine2.setOrigin(theLine.getEndLine());
//        theLine2.incAngle(m_angle);
//        theLine3.setOrigin(theLine2.getEndLine());
//        theLine3.incAngle(m_angle);
//        theLine4.setOrigin(theLine3.getEndLine());
//        theLine4.incAngle(m_angle);

        the3DLine.incAngle(m_angle);
        the3DLine.setOrigin(origin3D);
        the3DLine2.incAngle(m_angle);
        the3DLine2.setOrigin(the3DLine.getEndLine());
        the3DLine3.incAngle(m_angle);
        the3DLine3.setOrigin(the3DLine2.getEndLine());
        the3DLine4.incAngle(m_angle);
        the3DLine4.setOrigin(the3DLine3.getEndLine());
        the3DLine5.incAngle(m_angle);
        the3DLine5.setOrigin(the3DLine.getEndLine());
        the3DLine6.incAngle(m_angle);
        the3DLine6.setOrigin(the3DLine4.getEndLine());
        the3DLine7.incAngle(m_angle);
        the3DLine7.setOrigin(the3DLine2.getEndLine());
        the3DLine8.incAngle(m_angle);
        the3DLine8.setOrigin(the3DLine7.getEndLine());
        the3DLine9.incAngle(m_angle);
        the3DLine9.setOrigin(the3DLine5.getEndLine());
        the3DLine10.incAngle(m_angle);
        the3DLine10.setOrigin(the3DLine6.getEndLine());
        the3DLine11.incAngle(m_angle);
        the3DLine11.setOrigin(the3DLine10.getEndLine());
        the3DLine12.incAngle(m_angle);
        the3DLine12.setOrigin(the3DLine10.getEndLine());

        if ((origin3D.x > 1400 && velocity3D.x > 0) || (origin3D.x < 10 && velocity3D.x < 0))
            velocity3D.x *= -1;
        if ((origin3D.y > 900 && velocity3D.y > 0) || (origin3D.y < 10 && velocity3D.y < 0))
            velocity3D.y *= -1;

        origin3D += velocity3D;
    }
}