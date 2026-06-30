#include <iostream>
#include <string>
using namespace std;

struct StudentRecord {
  int rollNo;
  string name;
  string course;
  float cgpa;
};

int main() {
  StudentRecord db[100];
  int size = 0;
  int option = 0;
  
  while (option != 4) {
    cout << "\n=== Capstone Student Record System ===" << endl;
    cout << "1. Add New Student" << endl;
    cout << "2. Display All Records" << endl;
    cout << "3. Search Student by Roll Number" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter option: ";
    cin >> option;
    
    if (option == 1) {
      if (size < 100) {
        cout << "Enter Roll Number: ";
        cin >> db[size].rollNo;
        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, db[size].name);
        cout << "Enter Course: ";
        getline(cin, db[size].course);
        cout << "Enter CGPA: ";
        cin >> db[size].cgpa;
        size++;
        cout << "Record added!" << endl;
      } else {
        cout << "Storage limit reached." << endl;
      }
    } else if (option == 2) {
      if (size == 0) {
        cout << "No records available." << endl;
      } else {
        cout << "\nRoll\tName\tCourse\tCGPA" << endl;
        for (int i = 0; i < size; i++) {
          cout << db[i].rollNo << "\t" << db[i].name << "\t" << db[i].course << "\t" << db[i].cgpa << endl;
        }
      }
    } else if (option == 3) {
      int searchRoll;
      cout << "Enter Roll Number to search: ";
      cin >> searchRoll;
      int found = 0;
      for (int i = 0; i < size; i++) {
        if (db[i].rollNo == searchRoll) {
          cout << "\nRecord Found!" << endl;
          cout << "Roll No: " << db[i].rollNo << endl;
          cout << "Name   : " << db[i].name << endl;
          cout << "Course : " << db[i].course << endl;
          cout << "CGPA   : " << db[i].cgpa << endl;
          found = 1;
          break;
        }
      }
      if (found == 0) {
        cout << "No record found with Roll Number " << searchRoll << endl;
      }
    } else if (option == 4) {
      cout << "Thank you for using the system." << endl;
    } else {
      cout << "Invalid selection." << endl;
    }
  }
  
  return 0;
}
