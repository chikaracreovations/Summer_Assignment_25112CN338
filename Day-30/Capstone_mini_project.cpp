#include <iostream>
#include <string>
using namespace std;

struct Product {
  int code;
  string name;
  double price;
};

void showMenu() {
  cout << "\n=== Mini Store Billing System ===" << endl;
  cout << "1. View Product Catalog" << endl;
  cout << "2. Create New Bill" << endl;
  cout << "3. Exit" << endl;
}

void printCatalog(Product catalog[], int size) {
  cout << "\n--- Product Catalog ---" << endl;
  cout << "Code\tName\tPrice" << endl;
  for (int i = 0; i < size; i++) {
    cout << catalog[i].code << "\t" << catalog[i].name << "\tRs. " << catalog[i].price << endl;
  }
}

void generateBill(Product catalog[], int catalogSize) {
  int codes[50];
  int quantities[50];
  int count = 0;
  
  int choice = 1;
  while (choice == 1) {
    int inputCode, inputQty;
    cout << "Enter Product Code: ";
    cin >> inputCode;
    
    int valid = 0;
    for (int i = 0; i < catalogSize; i++) {
      if (catalog[i].code == inputCode) {
        valid = 1;
        break;
      }
    }
    
    if (valid == 1) {
      codes[count] = inputCode;
      cout << "Enter Quantity: ";
      cin >> inputQty;
      quantities[count] = inputQty;
      count++;
    } else {
      cout << "Invalid Product Code!" << endl;
    }
    
    cout << "Do you want to add more items? (1 for Yes, 0 for No): ";
    cin >> choice;
  }
  
  cout << "\n==================================" << endl;
  cout << "             STORE BILL           " << endl;
  cout << "==================================" << endl;
  cout << "Name\tQty\tPrice\tTotal" << endl;
  
  double grandTotal = 0.0;
  for (int i = 0; i < count; i++) {
    for (int j = 0; j < catalogSize; j++) {
      if (catalog[j].code == codes[i]) {
        double cost = catalog[j].price * quantities[i];
        cout << catalog[j].name << "\t" << quantities[i] << "\t" << catalog[j].price << "\t" << cost << endl;
        grandTotal += cost;
        break;
      }
    }
  }
  cout << "----------------------------------" << endl;
  cout << "Grand Total: Rs. " << grandTotal << endl;
  cout << "==================================" << endl;
}

int main() {
  Product catalog[5] = {
    {101, "Pen", 10.0},
    {102, "Notebook", 50.0},
    {103, "Eraser", 5.0},
    {104, "Ruler", 15.0},
    {105, "Marker", 30.0}
  };
  
  int option = 0;
  while (option != 3) {
    showMenu();
    cout << "Enter option: ";
    cin >> option;
    
    if (option == 1) {
      printCatalog(catalog, 5);
    } else if (option == 2) {
      generateBill(catalog, 5);
    } else if (option == 3) {
      cout << "Thank you for shopping!" << endl;
    } else {
      cout << "Invalid option chosen." << endl;
    }
  }
  
  return 0;
}
