#include <iostream>
#include <string>
using namespace std;

struct Employee {
  int id;
  string name;
  string dept;
};

int main() {
  Employee employees[100];
  int count = 0;
  int choice = 0;
  
  while (choice != 3) {
    cout << "\n--- Employee System ---" << endl;
    cout << "1. Add Employee" << endl;
    cout << "2. Display Employees" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
      if (count < 100) {
        cout << "Enter Employee ID: ";
        cin >> employees[count].id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, employees[count].name);
        cout << "Enter Department: ";
        getline(cin, employees[count].dept);
        count++;
        cout << "Employee record created." << endl;
      } else {
        cout << "System limit reached!" << endl;
      }
    } else if (choice == 2) {
      if (count == 0) {
        cout << "No employees registered." << endl;
      } else {
        cout << "\nID\tName\tDepartment" << endl;
        for (int i = 0; i < count; i++) {
          cout << employees[i].id << "\t" << employees[i].name << "\t" << employees[i].dept << endl;
        }
      }
    } else if (choice == 3) {
      cout << "Goodbye!" << endl;
    } else {
      cout << "Invalid selection." << endl;
    }
  }
  
  return 0;
}
