#include <iostream>
using namespace std;

int main() {
  double balance = 5000.0;
  int choice = 0;
  
  while (choice != 4) {
    cout << "\n--- ATM Menu ---" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
      cout << "Your balance is: Rs. " << balance << endl;
    } else if (choice == 2) {
      double dep;
      cout << "Enter deposit amount: ";
      cin >> dep;
      if (dep > 0) {
        balance += dep;
        cout << "Successfully deposited Rs. " << dep << endl;
      } else {
        cout << "Invalid deposit amount." << endl;
      }
    } else if (choice == 3) {
      double withdraw;
      cout << "Enter withdrawal amount: ";
      cin >> withdraw;
      if (withdraw > balance) {
        cout << "Insufficient balance!" << endl;
      } else if (withdraw <= 0) {
        cout << "Invalid withdrawal amount." << endl;
      } else {
        balance -= withdraw;
        cout << "Please collect your cash: Rs. " << withdraw << endl;
      }
    } else if (choice == 4) {
      cout << "Thank you for using our ATM!" << endl;
    } else {
      cout << "Invalid choice." << endl;
    }
  }
  
  return 0;
}
