// Voting 🗳️
// Codédex

#include <iostream>

int main() {
  int age = 25;
  bool citizen = true;
  bool registered = false;

  if (age >= 18 && citizen == true && registered == true) {
    std::cout << "You can vote!\n";
  }
  else if (age < 18) {
    std::cout << "You are not old enough to vote.\n";
  }
  else if (citizen == false) {
    std::cout << "You are not eligible to vote.\n";
  }
  else if (registered == false) {
    std::cout << "You need to register first.\n";
  }
  else {
    std::cout << "You have not met the requirements.\n";
  }
}
