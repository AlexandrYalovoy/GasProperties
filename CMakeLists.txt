cmake_minimum_required(VERSION 3.20)
project(GasProperties)

set(CMAKE_CXX_STANDARD 17)

add_executable(GasProperties main.cpp Chemical_base/Gas_c_b.cpp Chemical_base/Gas_c_b.h)
