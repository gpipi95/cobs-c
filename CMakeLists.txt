cmake_minimum_required(VERSION 3.14)

project(cobs-c LANGUAGES CXX C)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(COBS_SRC)


add_subdirectory(tests-c)


list(APPEND COBS_SRC
    cobs.c
    COBSClass.cpp
)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(cobs-c
  main.cpp
  ${COBS_SRC}
)

target_link_libraries(cobs-c 
  tests-lib
  Qt${QT_VERSION_MAJOR}::Core
)
