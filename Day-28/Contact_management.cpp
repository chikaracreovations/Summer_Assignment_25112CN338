#include <iostream>
#include <string>
using namespace std;

struct Contact {
  string name;
  string phone;
};

int main() {
  Contact contacts[100];
  int count = 0;
  int choice = 0;
  
  while (choice != 4) {
    cout << "\n--- Contacts Directory ---" << endl;
    cout << "1. Add Contact" << endl;
    cout << "2. Display All Contacts" << endl;
    cout << "3. Search Contact by Name" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
      if (count < 100) {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, contacts[count].name);
        cout << "Enter Phone Number: ";
        getline(cin, contacts[count].phone);
        count++;
        cout << "Contact saved." << endl;
      } else {
        cout << "Directory is full!" << endl;
      }
    } else if (choice == 2) {
      if (count == 0) {
        cout << "No contacts saved." << endl;
      } else {
        cout << "\n--- Contact List ---" << endl;
        for (int i = 0; i < count; i++) {
          cout << contacts[i].name << " : " << contacts[i].phone << endl;
        }
      }
    } else if (choice == 3) {
      string query;
      cin.ignore();
      cout << "Enter name to search: ";
      getline(cin, query);
      int found = 0;
      for (int i = 0; i < count; i++) {
        if (contacts[i].name == query) {
          cout << "Found! Name: " << contacts[i].name << ", Phone: " << contacts[i].phone << endl;
          found = 1;
          break;
        }
      }
      if (found == 0) {
        cout << "Contact not found." << endl;
      }
    } else if (choice == 4) {
      cout << "Exiting directory." << endl;
    } else {
      cout << "Invalid selection." << endl;
    }
  }
  
  return 0;
}
