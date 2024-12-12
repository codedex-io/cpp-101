// Coin Flip 🪙
// Codédex

#include <iostream>
#include <cstdlib>

int main() {
  srand(time(NULL));

  int num = std::rand() % 2;  // Generates a random number that's either 0 or 1

  if (num > 0.5) { 
    std::cout << "Heads\n";
  }
  else { 
    std::cout << "Tails\n";
  }
}