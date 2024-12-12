// Fortune Cookie 🥠
// Codédex

#include <iostream>
#include <cstdlib>

int main() {
  srand(time(NULL));

  int fortune = std::rand() % 6;  // Generates a random number that's either 0 or 1

  if (fortune == 0) { 
    std::cout << "🥠 Don't pursue happiness – create it.\n";
  }
  else if (fortune == 1) { 
    std::cout << "🥠 All things are difficult before they are easy.\n";
  }
  else if (fortune == 2) {
    std::cout << "🥠 The early bird gets the worm, but the second mouse gets the cheese.\n";
  }
  else if (fortune == 3) {
    std::cout << "🥠 Someone in your life needs a letter from you.\n";
  }
  else if (fortune == 4) {
    std::cout << "🥠 The fortune you search for is in another cookie.\n";
  }
  else {
    std::cout << "🥠 Help! I'm being held prisoner in a Chinese bakery!\n";
  }
}