#include "../include/scrabble.hpp"

#include "gtest/gtest.h"

struct ScrabbleTestSuite : public ::testing::Test {
    Scrabble scorer;

    void SetUp() override { scorer = createDefaultScorer(); }
};

TEST(TestSuite, dummyTest) { ASSERT_TRUE(false); }

TEST_F(ScrabbleTestSuite, dummyTest) { ASSERT_TRUE(true); }

TEST_F(ScrabbleTestSuite, CabbageinInitialTest) {
    ASSERT_EQ(scrabble("CABBAGE"), 14);
}

TEST_F(ScrabbleTestSuite, ZeroTest) { ASSERT_EQ(scrabble(""), 0); }

TEST_F(ScrabbleTestSuite, MixedTest) { ASSERT_EQ(scrabble("cAbBaGe"), 14); }

TEST_F(ScrabbleTestSuite, WeridTest) { ASSERT_EQ(scrabble("WORD 123!"), 8); }

TEST_F(ScrabbleTestSuite, AllTest) { ASSERT_EQ(scrabble("ADBFKJQ"), 33); }
