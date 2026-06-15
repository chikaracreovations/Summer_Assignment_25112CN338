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
  int arr2[n];
  int k = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      arr2[k] = arr[i];
      k++;
    }
  }
  for (int i = k; i < n; i++) {
    arr2[i] = 0;
  }
  cout << "Array after moving zeroes to the end is: ";
  for (int i = 0; i < n; i++) {
    cout << arr2[i] << " ";
  }

  return 0;
}