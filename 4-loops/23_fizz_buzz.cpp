// Fizz Buzz 🐝
// Codédex

#include <iostream>

int main() {
  for (int num = 1; num <= 100; num++) {
    if (num % 3 == 0 and num % 5 == 0) {
      std::cout << "FizzBuzz\n";
    }
    else if (num % 3 == 0) {
      std::cout << "Fizz\n";
    }
    else if (num % 5 == 0) {
      std::cout << "Buzz\n";
    }
    else {
      std::cout << num << "\n";
    }
  }
}
