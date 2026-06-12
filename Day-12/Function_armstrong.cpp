#include <iostream>
#include <cmath>
using namespace std;

void checkarmstrong(int n) {
  int temp1 = n;
  int temp2 = n;
  int count = 0;
  while (temp1 > 0) {
    temp1 = temp1 / 10;
    count++;
  }
  int sum = 0;
  while (temp2 > 0) {
    int digit = temp2 % 10;
    sum = sum + pow(digit, count);
    temp2 = temp2 / 10;
  }

  if (sum == n) {
    cout << "Number is Armstrong" << endl;
  } else {
    cout << "Number is not Armstrong" << endl;
  }
}

int main() {
  int x;
  cout << "Enter a number: ";
  cin >> x;
  checkarmstrong(x);
  return 0;
}