set(This TestSuite)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.14.0
)

FetchContent_MakeAvailable(googletest)
include(GoogleTest)

add_executable(${This} "")

target_sources(${This} PRIVATE main.cpp)

target_link_libraries(${This} PUBLIC gtest_main Thing)

add_subdirectory(thing)

gtest_discover_tests(${This})
