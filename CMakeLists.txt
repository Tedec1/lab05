cmake_minimum_required(VERSION 3.0)
project(mondrian)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(mondrian
        main.cpp
        mondrian.cpp
        mondrian.h
        picture.cpp
        picture.h 
        lodepng.cpp
        lodepng.h)
