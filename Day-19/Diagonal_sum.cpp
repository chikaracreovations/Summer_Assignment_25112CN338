#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter size of square matrix: ";
  cin >> n;

  int a[n][n];
  cout << "Enter elements: " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        sum = sum + a[i][j];
      }
    }
  }

  cout << "Diagonal sum is: " << sum << endl;
  return 0;
}
