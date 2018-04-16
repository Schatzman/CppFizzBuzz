#include <gtest/gtest.h>
#include <iostream>
#include "FizzHelper.h"

TEST(TestMultipleOfThree, givenThreeExpectTrue) {
   EXPECT_TRUE(isMultipleOfThree(3));
}

TEST(TestMultipleOfThree, givenFiveExpectFalse) {
   EXPECT_FALSE(isMultipleOfThree(5));
}
