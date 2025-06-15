// Old Money / New Money 🤑
// Codédex

#include <iostream>
#include <string>

class WealthyFamily {
public:
  std::string name;
  int networth;
};

int main() {
  WealthyFamily pauls;

  pauls.name = "The Paul Brothers";
  pauls.networth = 250000000;

  std::cout << pauls.name << ":\n";
  std::cout << "We are worth $" << pauls.networth << "!\n";
}