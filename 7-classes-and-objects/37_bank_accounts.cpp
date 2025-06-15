// Bank Accounts 🏦
// Codédex

#include <iostream>
#include <string>

class BankAccount {
public:
  std::string name;
  int account_id;
  std::string account_type;
  double balance;

  double deposit(double x) {
    balance = balance + x;
    return balance;
  }

  double withdraw(double x) {
    balance = balance - x;
    return balance;
  }

  void display_balance() {
    std::cout << "The balance is $" << balance << "\n";
  }
};

int main() {
  BankAccount checking1;

  checking1.name = "Sonny Li";
  checking1.account_id = 10001;
  checking1.account_type = "Checkings";
  checking1.balance = 100.56;

  checking1.deposit(96);
  checking1.withdraw(25);
  checking1.display_balance();
}
