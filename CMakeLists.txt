cmake_minimum_required(VERSION 3.20.2)
project(operating_overloading)

set(CMAKE_CXX_STANDARD 20)

add_executable(operating_overloading main.cpp EanCode.cpp EanCode.h Item.cpp Item.h)
