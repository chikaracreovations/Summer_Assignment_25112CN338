#include <iostream>
using namespace std;

void checkpalindrome(int n) {
  int original = n;
  int sum = 0;

  while (n > 0) {
    int digit = n % 10;
    sum = sum * 10 + digit;
    n = n / 10;
  }

  if (sum == original) {
    cout << "Number is palindrome" << endl;
  } else {
    cout << "Number is not palindrome" << endl;
  }
}

int main() {
  int x;
  cout << "Enter a number: ";
  cin >> x;
  checkpalindrome(x);
  return 0;
}