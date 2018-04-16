#include <gtest/gtest.h>
#include <iostream>
#include "FizzHelper.h"

TEST(TestMultipleOfBothThreeAndFive, givenFiveExpectTrue) {
   EXPECT_TRUE(isMultipleOfBothThreeAndFive(15));
}

TEST(TestMultipleOfBothThreeAndFive, givenThreeExpectFalse) {
   EXPECT_FALSE(isMultipleOfBothThreeAndFive(3));
}
