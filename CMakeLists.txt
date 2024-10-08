cmake_minimum_required(VERSION 3.27)
project(SFMLPlayground)

include(FetchContent)
set(CMAKE_CXX_STANDARD 17)
FETCHCONTENT_DECLARE(SFML GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 2.6.0)
FETCHCONTENT_MAKEAVAILABLE(SFML)

add_executable(SFMLPlayground main.cpp
        GameClasses/Game.h
        GameClasses/Game.cpp
        GameClasses/Components.h
        GameClasses/Entity.h
        GameClasses/Entity.cpp
        GameClasses/EntityManager.cpp
        Vec2.cpp
        SpinnyAppClasses/App.h
        SpinnyAppClasses/App.cpp
        SpinnyAppClasses/Line.h
        SpinnyAppClasses/Line.cpp
        SpinnyAppClasses/Line3D.h
        SpinnyAppClasses/Line3D.cpp
        SpinnyAppClasses/OtherFunctions.h
        SpinnyAppClasses/Matrix3D.h
        SpinnyAppClasses/Matrix3D.cpp
)

target_link_libraries(SFMLPlayground sfml-graphics)