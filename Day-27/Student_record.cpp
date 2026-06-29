#include <iostream>
#include <string>
using namespace std;

struct Student {
  int roll;
  string name;
  float marks;
};

int main() {
  Student students[100];
  int count = 0;
  int choice = 0;
  
  while (choice != 3) {
    cout << "\n--- Student Records ---" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Display All Students" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
      if (count < 100) {
        cout << "Enter Roll Number: ";
        cin >> students[count].roll;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, students[count].name);
        cout << "Enter Marks: ";
        cin >> students[count].marks;
        count++;
        cout << "Record added successfully!" << endl;
      } else {
        cout << "Database full!" << endl;
      }
    } else if (choice == 2) {
      if (count == 0) {
        cout << "No student records found." << endl;
      } else {
        cout << "\nRoll\tName\tMarks" << endl;
        for (int i = 0; i < count; i++) {
          cout << students[i].roll << "\t" << students[i].name << "\t" << students[i].marks << endl;
        }
      }
    } else if (choice == 3) {
      cout << "Exiting..." << endl;
    } else {
      cout << "Invalid choice." << endl;
    }
  }
  
  return 0;
}
