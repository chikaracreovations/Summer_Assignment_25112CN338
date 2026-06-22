#include <iostream>
using namespace std;

int main() {
  char str[100];
  cout << "Enter a string: ";
  cin >> str;
  
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }
  
  int isPal = 1;
  for (int i = 0; i < len / 2; i++) {
    if (str[i] != str[len - 1 - i]) {
      isPal = 0;
      break;
    }
  }
  
  if (isPal == 1) {
    cout << "String is a palindrome." << endl;
  } else {
    cout << "String is not a palindrome." << endl;
  }
  
  return 0;
}
