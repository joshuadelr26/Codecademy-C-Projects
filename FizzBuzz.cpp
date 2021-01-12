#include <iostream>
 
int main() {
 // Joshua Del Rosario, simple Fizz Buzz program
  // loops 100 times
 for (int i = 1; i <= 100; i++) {
   // if multiple of both 3 and 5, print FizzBuzz
   if (i % 3 == 0 && i % 5 == 0) {
     std::cout << "FizzBuzz\n";
   } else if (i % 5 == 0) {
     // if only multiple of 5
     std::cout << "Buzz\n";
   } else if (i % 3 == 0) {
     // if only multiple of 3
     std::cout << "Fizz\n";
   } else {
     // if none of conditions exist then print out number
   std::cout << i << "\n";
   }
 }
}
