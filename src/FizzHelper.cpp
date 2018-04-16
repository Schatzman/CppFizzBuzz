#include "FizzHelper.h"

bool isMultipleOfThree(int number) {
   if (number % 3 == 0) {
      return true;
   }
   return false;
}

bool isMultipleOfFive(int number) {
   if (number % 5 == 0) {
      return true;
   }
   return false;
}

bool isMultipleOfBothThreeAndFive(int number) {
   if (isMultipleOfThree(number) && isMultipleOfFive(number)) {
      return true;
   }
   return false;
}
