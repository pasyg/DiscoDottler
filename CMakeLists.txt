cmake_minimum_required(VERSION 3.0.0)
project(DiscoDottler VERSION 0.1.0)

set (CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS_RELEASE "-O4")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

INCLUDE_DIRECTORIES(
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/src/data
    ${PROJECT_SOURCE_DIR}/src/string_conversions
)


set(EXECUTABLE_OUTPUT_PATH ../)

set(DD_SOURCES
    main.cpp
    src/string_conversions/s_ability.cpp
    src/string_conversions/s_item.cpp
    src/string_conversions/s_moves.cpp
    src/string_conversions/s_nature.cpp
    src/string_conversions/s_species.cpp
    src/string_conversions/string_conversions.cpp
)

add_executable(DD ${DD_SOURCES})