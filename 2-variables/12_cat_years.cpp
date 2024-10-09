// Cat Years 🐈

#include <iostream>

int main() {
    int catAge;

    std::cout << "Welcome to the Cat Years program! This only works for cats older than 3 years old.\n";
    std::cout << "Enter your cat's age: ";
    std::cin >> catAge;

    int humanYears = (catAge - 2) * 4 + 24;
    std::cout << "Your cat is " << humanYears << " years old in human years.";
}
