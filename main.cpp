#include <iostream>
#include "FizzHelper.h"

int main() {
   std::cout << "Salutations Multiverse!" << std::endl;
   for (int i = 0; i < 100; i++) {
      int count = i + 1;
      if (isMultipleOfBothThreeAndFive(count)) {
         std::cout << "FizzBuzz!" << std::endl;
         continue;
      } else if (isMultipleOfThree(count)) {
         std::cout << "Fizz!" << std::endl;
         continue;
      } else if (isMultipleOfFive(count)) {
         std::cout << "Buzz!" << std::endl;
         continue;
      }
      std::cout << count << std::endl;
   }
}
