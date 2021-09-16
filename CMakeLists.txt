cmake_minimum_required(VERSION 3.20)
project(GasProperties)

set(CMAKE_CXX_STANDARD 17)

add_executable(GasProperties main.cpp Chemical_base/Gas_component.cpp Chemical_base/Gas_component.h Chemical_base/Gas_const.h Chemical_base/Gas_comp_array.cpp Chemical_base/Gas_comp_array.h)
