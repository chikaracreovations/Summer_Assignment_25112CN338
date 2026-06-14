#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[n];

  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int key;
  cout << "Enter the element to search for: ";
  cin >> key;

  bool check = false;
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      check = true;
      break;
    }
  }
  if (check == true) {
    cout << "Element found" << endl;
  } else {
    cout << "Element not found" << endl;
  }
  return 0;
}