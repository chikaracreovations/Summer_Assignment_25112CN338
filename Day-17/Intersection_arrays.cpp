#include <iostream>
using namespace std;

int main() {
  int n1, n2;
  cout << "Enter size of array 1: ";
  cin >> n1;
  int a[n1];
  cout << "Enter elements of array 1: ";
  for (int i = 0; i < n1; i++)
    cin >> a[i];

  cout << "Enter size of array 2: ";
  cin >> n2;
  int b[n2];
  cout << "Enter elements of array 2: ";
  for (int i = 0; i < n2; i++)
    cin >> b[i];

  int inter[n1];
  int k = 0;

  for (int i = 0; i < n1; i++) {
    int inb = 0;
    for (int j = 0; j < n2; j++) {
      if (a[i] == b[j]) {
        inb = 1;
        break;
      }
    }
    if (inb == 1) {
      int already = 0;
      for (int j = 0; j < k; j++) {
        if (a[i] == inter[j]) {
          already = 1;
          break;
        }
      }
      if (already == 0) {
        inter[k] = a[i];
        k++;
      }
    }
  }

  cout << "Intersection: ";
  for (int i = 0; i < k; i++) {
    cout << inter[i] << " ";
  }
  return 0;
}
