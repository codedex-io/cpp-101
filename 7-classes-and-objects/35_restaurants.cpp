// Peter Luger Steak House 🥩
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
  Restaurant katz;
  Restaurant grand_central;
  
  // ❌ This doesn't work just yet! 
  peter_luger.name = "Peter Luger Steak House";
  peter_luger.category = "American";
  peter_luger.rating = 4.4;
  peter_luger.price = "$$$$";
  peter_luger.delivery = false;

  katz.name = "Katz's Delicatessen";
  katz.category = "Deli";
  katz.rating = 4.5;
  katz.price = "$$";
  katz.delivery = false;

  grand_central.name = "Grand Central Oyster Bar";
  grand_central.category = "Seafood";
  grand_central.rating = 4.2;
  grand_central.price = "$$$";
  grand_central.delivery = false;

  std::cout << peter_luger.name << "\n";
  std::cout << peter_luger.category << "\n";
  std::cout << peter_luger.rating << "\n";
  std::cout << peter_luger.price << "\n";
  std::cout << peter_luger.delivery << "\n";
}
