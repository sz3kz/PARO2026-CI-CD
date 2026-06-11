set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ScrabbleTests
  scrabble-tests.cpp)

target_link_libraries (ScrabbleTests PUBLIC scrabble gtest gtest_main pthread)

add_test(NAME Scrabble
    COMMAND ScrabbleTests --gtest_output=xml:${CMAKE_BINARY_DIR}/junit/exercise2.junit.xml)
