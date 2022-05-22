set(CMAKE_INCLUDE_CURRENT_DIR ON)
project(tests-c)

include_directories(..)

add_library(tests-lib
    test.c
    TestClass.cpp
)

# target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
target_include_directories(tests-lib PUBLIC ${PROJECT_SOURCE_DIR})
