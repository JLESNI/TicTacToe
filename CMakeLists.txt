cmake_minimum_required(VERSION 3.27)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 17)

add_executable(TicTacToe main.cpp
        grid.h
        grid.cpp
        menu.h
        menu.cpp
        pVp.h
        pVp.cpp)
