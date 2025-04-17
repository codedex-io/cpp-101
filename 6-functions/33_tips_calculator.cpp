// Tips Calculator 🤑
// Codédex

#include <iostream>

void tips_menu() {
  std::cout << "Leave a tip?\n";
  std::cout << "1) 15%\n";
  std::cout << "2) 20%\n";
  std::cout << "3) 25%\n\n";
}

int tips_calculator(float total, int number) {
  int result = total * number + total;
  return result;
}

int main() {
  tips_menu();
  std::cout << "$" << tips_calculator(46.59, 2) << "\n";
}
