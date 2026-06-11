add_library(scrabble SHARED
    src/scrabble.cpp
    src/LetterHandler.cpp
    src/Rewarder.cpp
)

target_include_directories(scrabble PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_subdirectory(ut)
