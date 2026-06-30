#include <iostream>
#include <string>
using namespace std;

struct BookRecord {
  int id;
  string title;
  string category;
  int copies;
};

int main() {
  BookRecord catalog[100];
  int count = 0;
  int choice = 0;
  
  while (choice != 4) {
    cout << "\n=== Capstone Library System ===" << endl;
    cout << "1. Add Book to Catalog" << endl;
    cout << "2. View Catalog" << endl;
    cout << "3. Search Book by Title" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
      if (count < 100) {
        cout << "Enter Book ID: ";
        cin >> catalog[count].id;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, catalog[count].title);
        cout << "Enter Category: ";
        getline(cin, catalog[count].category);
        cout << "Enter Available Copies: ";
        cin >> catalog[count].copies;
        count++;
        cout << "Book recorded!" << endl;
      } else {
        cout << "Catalog database is full." << endl;
      }
    } else if (choice == 2) {
      if (count == 0) {
        cout << "Catalog is empty." << endl;
      } else {
        cout << "\nID\tTitle\tCategory\tCopies" << endl;
        for (int i = 0; i < count; i++) {
          cout << catalog[i].id << "\t" << catalog[i].title << "\t" << catalog[i].category << "\t" << catalog[i].copies << endl;
        }
      }
    } else if (choice == 3) {
      string searchTitle;
      cin.ignore();
      cout << "Enter Book Title to search: ";
      getline(cin, searchTitle);
      int found = 0;
      for (int i = 0; i < count; i++) {
        if (catalog[i].title == searchTitle) {
          cout << "\nBook Found!" << endl;
          cout << "ID      : " << catalog[i].id << endl;
          cout << "Title   : " << catalog[i].title << endl;
          cout << "Category: " << catalog[i].category << endl;
          cout << "Copies  : " << catalog[i].copies << endl;
          found = 1;
          break;
        }
      }
      if (found == 0) {
        cout << "No book found with title '" << searchTitle << "'" << endl;
      }
    } else if (choice == 4) {
      cout << "Exiting catalog manager." << endl;
    } else {
      cout << "Invalid choice." << endl;
    }
  }
  
  return 0;
}
