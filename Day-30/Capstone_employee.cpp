#include <iostream>
#include <string>
using namespace std;

struct EmployeeRecord {
  int id;
  string name;
  string designation;
  double salary;
};

int main() {
  EmployeeRecord list[100];
  int count = 0;
  int choice = 0;
  
  while (choice != 4) {
    cout << "\n=== Capstone Employee Management ===" << endl;
    cout << "1. Add Employee Record" << endl;
    cout << "2. View All Employees" << endl;
    cout << "3. Search Employee by ID" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
      if (count < 100) {
        cout << "Enter ID: ";
        cin >> list[count].id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, list[count].name);
        cout << "Enter Designation: ";
        getline(cin, list[count].designation);
        cout << "Enter Monthly Salary: ";
        cin >> list[count].salary;
        count++;
        cout << "Employee recorded successfully!" << endl;
      } else {
        cout << "Database storage limit reached!" << endl;
      }
    } else if (choice == 2) {
      if (count == 0) {
        cout << "No employees recorded yet." << endl;
      } else {
        cout << "\nID\tName\tDesignation\tSalary" << endl;
        for (int i = 0; i < count; i++) {
          cout << list[i].id << "\t" << list[i].name << "\t" << list[i].designation << "\tRs. " << list[i].salary << endl;
        }
      }
    } else if (choice == 3) {
      int queryId;
      cout << "Enter Employee ID to search: ";
      cin >> queryId;
      int found = 0;
      for (int i = 0; i < count; i++) {
        if (list[i].id == queryId) {
          cout << "\nEmployee Record Found!" << endl;
          cout << "ID         : " << list[i].id << endl;
          cout << "Name       : " << list[i].name << endl;
          cout << "Designation: " << list[i].designation << endl;
          cout << "Salary     : Rs. " << list[i].salary << endl;
          found = 1;
          break;
        }
      }
      if (found == 0) {
        cout << "Employee with ID " << queryId << " not found." << endl;
      }
    } else if (choice == 4) {
      cout << "Exiting system." << endl;
    } else {
      cout << "Invalid selection." << endl;
    }
  }
  
  return 0;
}
