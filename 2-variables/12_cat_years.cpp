// Cat Years 🐈
// Codédex

#include <iostream>

int main() {
  int catAge;
  int humanYears;

  std::cout << "Welcome to the Cat Years program! This only works for cats 3+ years old.\n";
  std::cout << "Enter your cat's age: ";
  std::cin >> catAge;

  humanYears = (catAge - 2) * 4 + 24;

  std::cout << "Your cat is " << humanYears << " years old in human years.\n";
}
