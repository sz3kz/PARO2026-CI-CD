set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(app
        main.cpp)

target_link_libraries(app PUBLIC scrabble)