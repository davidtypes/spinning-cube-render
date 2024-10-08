cmake_minimum_required(VERSION 3.27)
project(spinning-cube-render)

include(FetchContent)
set(CMAKE_CXX_STANDARD 17)
FETCHCONTENT_DECLARE(SFML GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 2.6.0)
FETCHCONTENT_MAKEAVAILABLE(SFML)

add_executable(spinning-cube-render src/main.cpp
        src/App.cpp
        src/Line.cpp
        src/Line3D.cpp
        src/Matrix3D.cpp
        header/App.h
        header/Line.h
        header/Line3D.h
        header/Matrix3D.h
        header/OtherFunctions.h
)

target_link_libraries(spinning-cube-render sfml-graphics)