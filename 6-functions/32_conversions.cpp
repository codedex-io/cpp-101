// Order Cart 🛒
// Codédex

#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> cart = {
    "🍕 Pepperoni pizza", 
    "🥗 Garden salad", 
    "🥤 Diet Coke"
  };

  cart.push_back("🥫Marinara sauce");
  cart.pop_back();

  std::cout << cart[0] << " ";
  std::cout << cart[1] << " ";
  std::cout << cart[2] << "\n";

  std::cout << cart.size() << "\n";
}
