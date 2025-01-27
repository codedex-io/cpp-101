#include <iostream>

int main() {
  int guess = 0;
  
  std::cout << "Guess the number: ";
  std::cin >> guess;

  while (guess != 64) {
    std::cout << "Wrong guess! Guess the number: ";
    std::cin >> guess;
  }

  std::cout << "You guessed it correctly!";
}
