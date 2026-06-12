#include "Rewarder.hpp"

#include "gtest/gtest.h"

struct LetterHandlerTrivialTests : public ::testing::Test {
    char character{'N'};
    unsigned int point_amount_reward{67};

    LetterHandler letter{LetterHandler(character, point_amount_reward)};
};

TEST_F(LetterHandlerTrivialTests, GettersCheckTest_GettersReturnsExpectedValues)
{
    ASSERT_EQ(letter.getLetter(), character);
    ASSERT_EQ(letter.getPointAmountReward(), point_amount_reward);
}


struct ScrabbleFullLetterRangeTestSuite : public testing::Test
{
    Rewarder rewarder;
    ScrabbleFullLetterRangeTestSuite() {
        rewarder.add( LetterHandler('A',1));
        rewarder.add( LetterHandler('E',1));
        rewarder.add( LetterHandler('I',1));
        rewarder.add( LetterHandler('O',1));
        rewarder.add( LetterHandler('U',1));
        rewarder.add( LetterHandler('L',1));
        rewarder.add( LetterHandler('N',1));
        rewarder.add( LetterHandler('R',1));
        rewarder.add( LetterHandler('S',1));
        rewarder.add( LetterHandler('T',1));

        rewarder.add( LetterHandler('D',2));
        rewarder.add( LetterHandler('G',2));

        rewarder.add( LetterHandler('B',3));
        rewarder.add( LetterHandler('C',3));
        rewarder.add( LetterHandler('M',3));
        rewarder.add( LetterHandler('P',3));

        rewarder.add( LetterHandler('F',4));
        rewarder.add( LetterHandler('H',4));
        rewarder.add( LetterHandler('V',4));
        rewarder.add( LetterHandler('W',4));
        rewarder.add( LetterHandler('Y',4));

        rewarder.add( LetterHandler('K',5));

        rewarder.add( LetterHandler('J',8));
        rewarder.add( LetterHandler('X',8));

        rewarder.add( LetterHandler('Q',10));
        rewarder.add( LetterHandler('Z',10));
    }
};

TEST_F(ScrabbleFullLetterRangeTestSuite, dummyTest)
{
    ASSERT_TRUE(true);
}

TEST_F(ScrabbleFullLetterRangeTestSuite, AllUppercaseCharacterWordTest_UppercaseCabbageWordEvaluatesToExpectedValue)
{
    ASSERT_EQ(rewarder.getTotalReward("CABBAGE"), 14);
}

TEST_F(ScrabbleFullLetterRangeTestSuite, EmptyWordTest_EmptyStringEvaluatesToZero)
{
    ASSERT_EQ(rewarder.getTotalReward(""), 0);
}

TEST_F(ScrabbleFullLetterRangeTestSuite, MockingcaseVersusUppercaseWordTest_UppercaseAndMockingcaseCabbageWordEvaluateToSamePointReward)
{
    ASSERT_EQ(rewarder.getTotalReward("cAbBaGe"), rewarder.getTotalReward("CABBAGE"));
}


TEST_F(ScrabbleFullLetterRangeTestSuite, AllRegisteredPointRewardTest_StringContainingCharactersMappingToDifferentPointRewardValuesEvaluatesToExpectedValue)
{
    ASSERT_EQ(rewarder.getTotalReward("ADBFKJQ"), 33);
}

struct ScrabbleFewLetterRangeTestSuite : public testing::Test
{
    Rewarder rewarder;
    ScrabbleFewLetterRangeTestSuite() {
        rewarder.add( LetterHandler('A',1));
        rewarder.add( LetterHandler('D',2));
    };
};

TEST_F(ScrabbleFewLetterRangeTestSuite, UnregisteredCharacterHanding_SingleUnregisteredCharacterStringEvaluatesToZero)
{
    ASSERT_EQ(rewarder.getTotalReward("C"), 0);
}

TEST_F(ScrabbleFewLetterRangeTestSuite, UnregisteredCharacterHanding_UnregisteredCharactersAreIgnoredDuringEvaluation)
{
    ASSERT_EQ(rewarder.getTotalReward("A1"), 1);
}
