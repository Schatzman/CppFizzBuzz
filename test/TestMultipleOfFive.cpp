#include <gtest/gtest.h>
#include <iostream>
#include "FizzHelper.h"

TEST(TestMultipleOfFive, givenFiveExpectTrue) {
   EXPECT_TRUE(isMultipleOfFive(5));
}

TEST(TestMultipleOfFive, givenThreeExpectFalse) {
   EXPECT_FALSE(isMultipleOfFive(3));
}
