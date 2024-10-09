// Temperature in Brooklyn, NY 🌡️

#include <iostream>

int main() {
  double fahrenheit = 63.00;
  double celsius;

  celsius = (fahrenheit - 32) / 1.8;
  std::cout << "Temperature of Brooklyn, NY is " << celsius << " ℃ in Celsius.";
}
