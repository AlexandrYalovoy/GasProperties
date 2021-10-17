cmake_minimum_required(VERSION 3.20)
project(GasProperties)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "C:/Qt/6.2.0/mingw81_64/")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(GasProperties
        main.cpp
        Chemical_base/Gas_component.cpp
        Chemical_base/Gas_component.h
        Chemical_base/Gas_const.h
        Chemical_base/Gas_comp_arr.cpp
        Chemical_base/Gas_comp_arr.h
        Gas_calculation/Factor_z.cpp
        Gas_calculation/Factor_z.h
        Gas_calculation/Molar_mass.cpp
        Gas_calculation/Molar_mass.h
        Gas_calculation/Molar_heat_burning_20.cpp
        Gas_calculation/Molar_heat_burning_20.h
        Gas_calculation/Mass_heat_burning_20.cpp
        Gas_calculation/Mass_heat_burning_20.h
        Gas_calculation/Volume_heat_burning_20.cpp
        Gas_calculation/Volume_heat_burning_20.h
        Gas_calculation/Density.cpp
        Gas_calculation/Density.h
        Gas_calculation/Wobbe_number.cpp
        Gas_calculation/Wobbe_number.h
        Gas_calculation/Gas_calculation.cpp
        Gas_calculation/Gas_calculation.h
        GUI/Main_window.cpp GUI/Main_window.h GUI/Main_window.ui)

target_link_libraries(GasProperties
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

if (WIN32)
    #    set(DEBUG_SUFFIX)
    #    if (CMAKE_BUILD_TYPE MATCHES "Debug")
    #        set(DEBUG_SUFFIX "d")
    #    endif ()
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    foreach (QT_LIB Core Gui Widgets)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt6${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()
