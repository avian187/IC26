cmake_minimum_required(VERSION 3.26)
project(IC26_BevMoMo)

set(CMAKE_CXX_STANDARD 17)

add_executable(IC26_BevMoMo main.cpp
        Beverage.h
        Coffee.h
        Beverage.cpp
        Coffee.cpp)
