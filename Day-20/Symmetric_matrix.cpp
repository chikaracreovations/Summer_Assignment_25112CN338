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
  
  int flag = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] != a[j][i]) {
        flag = 0;
        break;
      }
    }
    if (flag == 0) {
      break;
    }
  }
  
  if (flag == 1) {
    cout << "The matrix is symmetric." << endl;
  } else {
    cout << "The matrix is not symmetric." << endl;
  }
  
  return 0;
}
