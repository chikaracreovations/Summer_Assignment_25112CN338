#include <iostream>
using namespace std;

int main() {
  char str[100];
  cout << "Enter a string: ";
  cin >> str;
  
  char result = '\0';
  int i = 0;
  while (str[i] != '\0') {
    int found = 0;
    for (int j = 0; j < i; j++) {
      if (str[i] == str[j]) {
        result = str[i];
        found = 1;
        break;
      }
    }
    if (found == 1) {
      break;
    }
    i++;
  }
  
  if (result != '\0') {
    cout << "First repeating character is: " << result << endl;
  } else {
    cout << "No repeating character found." << endl;
  }
  
  return 0;
}
