if (BUILD_SHARED_LIBS)
    add_library(Thing SHARED "")
else()
    add_library(Thing STATIC "")
endif()

target_sources(Thing
    PRIVATE
    src/thing.cpp
)

target_include_directories(Thing PUBLIC include)
