// Enter PIN 🏧
// Codédex

#include <iostream>

int main() { 
  int pin = 0; 

  std::cout << "BANK OF CODÉDEX\n\n"; 

  std::cout << "Enter your PIN: "; 
  std::cin >> pin; 

  while (pin != 1234) { 
    std::cout << "Incorrect PIN. Enter your PIN again: "; 
    std::cin >> pin; 
  } 

  if (pin == 1234) { 
    std::cout << "PIN accepted!"; 
  } 
}