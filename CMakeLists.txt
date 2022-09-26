cmake_minimum_required(VERSION 3.0.0)
project(DiscoDottler VERSION 0.1.0)

set (CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS_RELEASE "-O4")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

INCLUDE_DIRECTORIES(
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/src/data
)


set(EXECUTABLE_OUTPUT_PATH ../)

set(DD_SOURCES
    main.cpp
)

add_executable(DiscoDottler ${DD_SOURCES})