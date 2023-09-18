add_library(Thing)

target_sources(Thing
    PRIVATE
    src/thing.cpp
)

target_include_directories(Thing PUBLIC include)
