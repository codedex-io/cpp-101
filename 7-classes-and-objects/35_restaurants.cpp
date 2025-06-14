// Restaurants 🍽️
// Codédex

#include <iostream>
#include <string>

class Restaurant {
  std::string name;
  std::string category;
  double rating;
  std::string price;
  bool delivery;
};

int main() {
  Restaurant peter_luger;

  peter_luger.name = "Peter Luger Steak House";
  peter_luger.category = "American";
  peter_luger.rating = 4.4;
  peter_luger.price = "$$$$";
  peter_luger.delivery = false;

  std::cout << peter_luger.name << "\n";
  std::cout << peter_luger.category << "\n";
  std::cout << peter_luger.rating << "\n";
  std::cout << peter_luger.price << "\n";
  std::cout << peter_luger.delivery << "\n";
}