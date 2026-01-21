cmake_minimum_required(VERSION 3.16)

project(Viikkotehtava_3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Viikkotehtava_3 main.cpp
    faija.h faija.cpp
    son.h son.cpp)

include(GNUInstallDirs)
install(TARGETS Viikkotehtava_3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
