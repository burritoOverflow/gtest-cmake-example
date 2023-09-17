add_subdirectory(thing)

add_executable(${PROJECT_NAME} "")

target_sources(${PROJECT_NAME} PRIVATE main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Thing)

# we just want the "main" (project) executable in a "bin" dir
set_target_properties(${PROJECT_NAME}
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
