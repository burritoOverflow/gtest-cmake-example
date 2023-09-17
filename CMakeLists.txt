cmake_minimum_required(VERSION 3.25)

project(GTestExample LANGUAGES CXX)

option(BUILD_SHARED_LIBS "Build shared libraries instead of static libraries" OFF)

if (BUILD_SHARED_LIBS)
    set(LIBTYPE SHARED)
else()
    set(LIBTYPE STATIC)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(CTest)
include(GoogleTest)
enable_testing()

add_subdirectory(src)
add_subdirectory(test)
