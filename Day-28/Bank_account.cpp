#include <iostream>
#include <string>
using namespace std;

struct Account {
  int accNo;
  string name;
  double balance;
};

int main() {
  Account acc;
  cout << "--- Create Account ---" << endl;
  cout << "Enter Account Number: ";
  cin >> acc.accNo;
  cin.ignore();
  cout << "Enter Name: ";
  getline(cin, acc.name);
  cout << "Enter Initial Balance: ";
  cin >> acc.balance;
  cout << "Account created successfully!" << endl;
  
  int choice = 0;
  while (choice != 4) {
    cout << "\n--- Account Operations ---" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Display Details" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
      double amt;
      cout << "Enter amount to deposit: ";
      cin >> amt;
      acc.balance += amt;
      cout << "Deposited! New balance: Rs. " << acc.balance << endl;
    } else if (choice == 2) {
      double amt;
      cout << "Enter amount to withdraw: ";
      cin >> amt;
      if (amt > acc.balance) {
        cout << "Insufficient funds!" << endl;
      } else {
        acc.balance -= amt;
        cout << "Withdrawn! New balance: Rs. " << acc.balance << endl;
      }
    } else if (choice == 3) {
      cout << "\n--- Account Summary ---" << endl;
      cout << "Account No: " << acc.accNo << endl;
      cout << "Holder Name: " << acc.name << endl;
      cout << "Balance    : Rs. " << acc.balance << endl;
    } else if (choice == 4) {
      cout << "Exiting bank system." << endl;
    } else {
      cout << "Invalid selection." << endl;
    }
  }
  
  return 0;
}
