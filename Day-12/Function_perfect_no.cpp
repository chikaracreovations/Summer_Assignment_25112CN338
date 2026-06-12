#include <iostream>
using namespace std;

void checkperfect(int n) {
  int sum = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      sum = sum + i;
    }
  }
  if (sum == n) {
    cout << "Number is perfect" << endl;
  } else {
    cout << "Number is not perfect" << endl;
  }
}
int main() {
  int x;
  cout << "Enter a number: ";
  cin >> x;
  checkperfect(x);
  return 0;
}