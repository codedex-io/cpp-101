// Classic Cars 🚗
// Codédex

#include <iostream>
#include <string>

class Car {
public:
  std::string brand;
  std::string model;
  int year;
  bool classic;

  Car(std::string b, std::string m, int y, bool c) {
    brand = b;
    model = m;
    year = y;
    classic = c;
  }
};

int main() {
  Car car1("Porsche", "911", 1964, true);
  Car car2("Ford", "Mustang", 1965, true);

  std::cout << car1.brand << "\n";
  std::cout << car1.model << "\n";
  std::cout << car1.year << "\n";
  std::cout << car1.classic << "\n";
}