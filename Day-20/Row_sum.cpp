#include <iostream>
using namespace std;

int main() {
  int r, c;
  cout << "Enter rows and columns: ";
  cin >> r >> c;
  
  int a[r][c];
  cout << "Enter elements: " << endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> a[i][j];
    }
  }
  
  for (int i = 0; i < r; i++) {
    int sum = 0;
    for (int j = 0; j < c; j++) {
      sum = sum + a[i][j];
    }
    cout << "Sum of row " << i + 1 << " is: " << sum << endl;
  }
  
  return 0;
}
