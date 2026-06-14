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
  bool check = false;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        check = true;
        break;
      }
    }
  }
  if (check == true) {
    cout << "Duplicate element found" << endl;
  } else {
    cout << "No duplicate elements found" << endl;
  }
  return 0;
}