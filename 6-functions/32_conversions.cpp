// Conversions ➡️
// Codédex

#include <iostream>

int temp_conversion(int number) {
  int result = (number - 32) * 5 / 9;
  return result;
}

int main() {
  std::cout << temp_conversion(100) << "\n";
}
