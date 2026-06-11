add_library(scrabble SHARED
    src/scrabble.cpp
)

target_include_directories(scrabble PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_subdirectory(ut)
