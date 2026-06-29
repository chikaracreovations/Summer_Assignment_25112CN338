#include <iostream>
#include <string>
using namespace std;

struct Item {
  int id;
  string name;
  int qty;
};

int main() {
  Item items[100];
  int count = 0;
  int choice = 0;
  
  while (choice != 4) {
    cout << "\n--- Inventory System ---" << endl;
    cout << "1. Add Item" << endl;
    cout << "2. Display Stock" << endl;
    cout << "3. Update Quantity" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
      if (count < 100) {
        cout << "Enter Item ID: ";
        cin >> items[count].id;
        cin.ignore();
        cout << "Enter Item Name: ";
        getline(cin, items[count].name);
        cout << "Enter Quantity: ";
        cin >> items[count].qty;
        count++;
        cout << "Item registered." << endl;
      } else {
        cout << "Inventory storage limit reached!" << endl;
      }
    } else if (choice == 2) {
      if (count == 0) {
        cout << "No items in inventory." << endl;
      } else {
        cout << "\nID\tName\tQuantity" << endl;
        for (int i = 0; i < count; i++) {
          cout << items[i].id << "\t" << items[i].name << "\t" << items[i].qty << endl;
        }
      }
    } else if (choice == 3) {
      int searchId, newQty;
      cout << "Enter Item ID to update: ";
      cin >> searchId;
      int found = 0;
      for (int i = 0; i < count; i++) {
        if (items[i].id == searchId) {
          cout << "Current Quantity: " << items[i].qty << endl;
          cout << "Enter new Quantity: ";
          cin >> newQty;
          items[i].qty = newQty;
          cout << "Quantity updated." << endl;
          found = 1;
          break;
        }
      }
      if (found == 0) {
        cout << "Item not found." << endl;
      }
    } else if (choice == 4) {
      cout << "Exiting Inventory." << endl;
    } else {
      cout << "Invalid choice." << endl;
    }
  }
  
  return 0;
}
