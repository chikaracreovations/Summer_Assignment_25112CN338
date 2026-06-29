#include <iostream>
using namespace std;

int main() {
  int arr[100];
  int size = 0;
  int choice = 0;
  
  while (choice != 4) {
    cout << "\n--- Array Operations ---" << endl;
    cout << "1. Insert Element" << endl;
    cout << "2. Display Array" << endl;
    cout << "3. Find Max and Min" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
      if (size < 100) {
        cout << "Enter element to insert: ";
        cin >> arr[size++];
        cout << "Element inserted!" << endl;
      } else {
        cout << "Array full!" << endl;
      }
    } else if (choice == 2) {
      if (size == 0) {
        cout << "Array is empty." << endl;
      } else {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
          cout << arr[i] << " ";
        }
        cout << endl;
      }
    } else if (choice == 3) {
      if (size == 0) {
        cout << "Array is empty." << endl;
      } else {
        int maxVal = arr[0], minVal = arr[0];
        for (int i = 1; i < size; i++) {
          if (arr[i] > maxVal) maxVal = arr[i];
          if (arr[i] < minVal) minVal = arr[i];
        }
        cout << "Max element: " << maxVal << endl;
        cout << "Min element: " << minVal << endl;
      }
    } else if (choice == 4) {
      cout << "Exiting system." << endl;
    } else {
      cout << "Invalid choice." << endl;
    }
  }
  
  return 0;
}
