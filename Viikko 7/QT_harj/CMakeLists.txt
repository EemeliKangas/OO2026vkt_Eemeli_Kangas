cmake_minimum_required(VERSION 3.16)

project(QT_harj LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

find_package(Qt6 REQUIRED COMPONENTS Core)

add_executable(QT_harj
  main.cpp
  consumer.h consumer.cpp
  producer.h producer.cpp
)
target_link_libraries(QT_harj PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(QT_harj PRIVATE Qt6::Core)

include(GNUInstallDirs)
install(TARGETS QT_harj
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
