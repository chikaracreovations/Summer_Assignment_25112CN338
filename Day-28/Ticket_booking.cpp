#include <iostream>
#include <string>
using namespace std;

int main() {
  int choice = 0;
  int seats = 0;
  double price = 0.0;
  
  cout << "--- Ticket Booking System ---" << endl;
  cout << "Select ticket type:" << endl;
  cout << "1. Economy (Rs. 150)" << endl;
  cout << "2. Premium (Rs. 250)" << endl;
  cout << "3. VIP (Rs. 500)" << endl;
  cout << "Enter choice: ";
  cin >> choice;
  
  if (choice == 1) {
    price = 150.0;
  } else if (choice == 2) {
    price = 250.0;
  } else if (choice == 3) {
    price = 500.0;
  } else {
    cout << "Invalid ticket type." << endl;
    return 0;
  }
  
  cout << "Enter number of seats to book: ";
  cin >> seats;
  
  if (seats <= 0) {
    cout << "Invalid number of seats." << endl;
    return 0;
  }
  
  double total = price * seats;
  string customerName;
  cin.ignore();
  cout << "Enter customer name: ";
  getline(cin, customerName);
  
  cout << "\n--- Booking Receipt ---" << endl;
  cout << "Customer Name: " << customerName << endl;
  cout << "Seats Booked : " << seats << endl;
  cout << "Total Cost   : Rs. " << total << endl;
  cout << "Booking Confirmed!" << endl;
  
  return 0;
}
