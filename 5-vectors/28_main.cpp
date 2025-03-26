// Sum of Even / Product of Odd 😵‍💫
// Codédex

#include <iostream>
#include <vector>

int main() {
  std::vector<int> num = {2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};

  int sum = 0;
  int product = 1;

  for (int i = 0; i < num.size(); i++) {
    if (num[i] % 2 == 0) {
      sum = sum + num[i];
    }
    else {
      product = product * num[i];
    }
  }

  std::cout << sum << "\n";
  std::cout << product << "\n";
}
