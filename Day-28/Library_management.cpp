#include <iostream>
#include <string>
using namespace std;

struct Book {
  int id;
  string title;
  string author;
};

int main() {
  Book books[100];
  int count = 0;
  int choice = 0;
  
  while (choice != 3) {
    cout << "\n--- Library System ---" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Search Book by ID" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
      if (count < 100) {
        cout << "Enter Book ID: ";
        cin >> books[count].id;
        cin.ignore();
        cout << "Enter Title: ";
        getline(cin, books[count].title);
        cout << "Enter Author: ";
        getline(cin, books[count].author);
        count++;
        cout << "Book added successfully!" << endl;
      } else {
        cout << "Library database full!" << endl;
      }
    } else if (choice == 2) {
      int searchId;
      cout << "Enter Book ID to search: ";
      cin >> searchId;
      int found = 0;
      for (int i = 0; i < count; i++) {
        if (books[i].id == searchId) {
          cout << "\nBook Found!" << endl;
          cout << "ID: " << books[i].id << endl;
          cout << "Title: " << books[i].title << endl;
          cout << "Author: " << books[i].author << endl;
          found = 1;
          break;
        }
      }
      if (found == 0) {
        cout << "Book not found." << endl;
      }
    } else if (choice == 3) {
      cout << "Exiting system." << endl;
    } else {
      cout << "Invalid choice." << endl;
    }
  }
  
  return 0;
}
