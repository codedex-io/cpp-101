// OOO 🏝️
// Codédex

#include <iostream>

void ooo_message(std::string date) {
  std::cout << "Thank you for your email.\n";
  std::cout << "I am currently out of the office and will be back " << date << "\n";
  std::cout << "I will respond as soon as I can upon my return.\n\n";
}

int main() {
  ooo_message("4/17");
  ooo_message("next week");
}
