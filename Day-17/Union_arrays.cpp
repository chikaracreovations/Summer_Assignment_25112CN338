#include <iostream>
using namespace std;

int main() {
  int n1, n2;
  cout << "Enter size of first array: ";
  cin >> n1;
  int a[n1];
  cout << "Enter first array: ";
  for (int i = 0; i < n1; i++) {
    cin >> a[i];
  }

  cout << "Enter size of second array: ";
  cin >> n2;
  int b[n2];
  cout << "Enter second array: ";
  for (int i = 0; i < n2; i++) {
    cin >> b[i];
  }

  int u[n1 + n2];
  int size = 0;

  for (int i = 0; i < n1; i++) {
    int dup = 0;
    for (int j = 0; j < size; j++) {
      if (a[i] == u[j]) {
        dup = 1;
        break;
      }
    }
    if (dup == 0) {
      u[size] = a[i];
      size++;
    }
  }

  for (int i = 0; i < n2; i++) {
    int dup = 0;
    for (int j = 0; j < size; j++) {
      if (b[i] == u[j]) {
        dup = 1;
        break;
      }
    }
    if (dup == 0) {
      u[size] = b[i];
      size++;
    }
  }

  cout << "Union of arrays: ";
  for (int i = 0; i < size; i++) {
    cout << u[i] << " ";
  }
  cout << endl;
  return 0;
}
