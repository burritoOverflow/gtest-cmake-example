cmake_minimum_required(VERSION 3.25)

project(GTestExample LANGUAGES CXX)

# seems this is a global variable: https://cmake.org/cmake/help/latest/variable/BUILD_SHARED_LIBS.html#variable:BUILD_SHARED_LIBS
# so no explicit configuruation is needed
# see also: https://cmake.org/cmake/help/latest/guide/tutorial/Selecting%20Static%20or%20Shared%20Libraries.html
option(BUILD_SHARED_LIBS "Build shared libraries instead of static libraries" OFF)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(CTest)
include(GoogleTest)
enable_testing()

add_subdirectory(src)
add_subdirectory(test)

set_target_properties(${PROJECT_NAME}
    PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)