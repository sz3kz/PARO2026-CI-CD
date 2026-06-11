#include "../include/scrabble.hpp"

#include "gtest/gtest.h"

struct ScrabbleTestSuite
{
};

TEST(ScrabbleTestSuite, dummyTest)
{
    ASSERT_TRUE(true);
}

TEST(ScrabbleTestSuite, CabbageinInitialTest)
{
    ASSERT_EQ(scrabble("CABBAGE"), 14);
}

TEST(ScrabbleTestSuite, ZeroTest)
{
    ASSERT_EQ(scrabble(""), 0);
}

TEST(ScrabbleTestSuite, MixedTest)
{
    ASSERT_EQ(scrabble("cAbBaGe"), 14);
}

TEST(ScrabbleTestSuite, WeridTest)
{
    ASSERT_EQ(scrabble("WORD 123!"), 8);
}

TEST(ScrabbleTestSuite, AllTest)
{
    ASSERT_EQ(scrabble("ADBFKJQ"), 33);
}
