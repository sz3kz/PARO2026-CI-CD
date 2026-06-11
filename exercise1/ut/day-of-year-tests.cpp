#include "gtest/gtest.h"
#include "day-of-year.hpp"


TEST(LeapFirstOfJanuaryTest, January1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}

TEST(LeapLastDay, December31IsLastDay)
{
  ASSERT_EQ(dayOfYear(12, 31, 2020), 366);
}

TEST(NormalLastDay, December31IsLastDay)
{
  ASSERT_EQ(dayOfYear(12, 31, 2019), 365);
}

TEST(NormalFirstOfJanuaryTest, January1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2019), 1);
}

TEST(NormalFirstOfJanuaryTest, January2stIsSecondDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 2, 2019), 2);
}

TEST(NormalFirstOfFebruaryTest, FunctionAddsJanuanryDays)
{
  ASSERT_EQ(dayOfYear(2, 1, 2019), 32);
}


TEST(NormalFirstOfMarchTest, FunctionAddsJanuanryAndNormalFebruaryDays)
{
  ASSERT_EQ(dayOfYear(3, 1, 2019), 60);
}

TEST(LeapFirstOfMarchTest, FunctionAddsJanuanryAndLeapFebruaryDays)
{
  ASSERT_EQ(dayOfYear(3, 1, 2020), 61);
}



TEST(LeapFirstOfMarchPrettyMileniumTest, FunctionAddsJanuanryAndLeapFebruaryDays)
{
  ASSERT_EQ(dayOfYear(3, 1, 2000), 61);
}


TEST(LeapFirstOfMarchUglyMileniumTest, FunctionAddsJanuanryAndLeapFebruaryDays)
{
  ASSERT_EQ(dayOfYear(3, 1, 2100), 60);
}