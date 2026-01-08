cmake_minimum_required(VERSION 3.16)

project(Olio-ohjelmointi_vk1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Olio-ohjelmointi_vk1 main.cpp)

include(GNUInstallDirs)
install(TARGETS Olio-ohjelmointi_vk1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
