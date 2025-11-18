// Tips Calculator 🤑
// Codédex

#include <iostream>

void tips_menu() {
  std::cout << "Leave a tip?\n";
  std::cout << "1) 15%\n";
  std::cout << "2) 20%\n";
  std::cout << "3) 25%\n\n";
}

float tips_calculator(float total, int number) {
  float percentage = 0.0f;

  if (number == 1) {
    percentage = 0.15f;
  }
  else if (number == 2) {
    percentage = 0.20f;
  }
  else if (number == 3) {
    percentage = 0.25f;
  }
  else {
    return total;
  }
  
  float result = total * percentage + total;
  return result;
}

int main() {
  tips_menu();
  std::cout << "$" << tips_calculator(46.59, 2) << "\n";
}
