#include <iostream>
using namespace std;

int main() {
  int choice = 0;
  double num1, num2;
  
  while (choice != 5) {
    cout << "\n--- Calculator Menu ---" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice >= 1 && choice <= 4) {
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;
    }
    
    if (choice == 1) {
      cout << "Result: " << num1 + num2 << endl;
    } else if (choice == 2) {
      cout << "Result: " << num1 - num2 << endl;
    } else if (choice == 3) {
      cout << "Result: " << num1 * num2 << endl;
    } else if (choice == 4) {
      if (num2 != 0) {
        cout << "Result: " << num1 / num2 << endl;
      } else {
        cout << "Error: Division by zero!" << endl;
      }
    } else if (choice == 5) {
      cout << "Exiting calculator." << endl;
    } else {
      cout << "Invalid choice." << endl;
    }
  }
  
  return 0;
}
