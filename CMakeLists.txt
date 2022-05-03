cmake_minimum_required(VERSION 3.22)
project(Kruskal_s_Algo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Kruskal_s_Algo
        header.h
        implementation.cpp
        main.cpp)
