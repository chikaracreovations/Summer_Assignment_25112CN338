#include <iostream>
using namespace std;

int main() {
  char str[100];
  cout << "Enter a string: ";
  cin >> str;
  
  char result = '\0';
  int i = 0;
  while (str[i] != '\0') {
    int count = 0;
    int j = 0;
    while (str[j] != '\0') {
      if (str[i] == str[j]) {
        count++;
      }
      j++;
    }
    if (count == 1) {
      result = str[i];
      break;
    }
    i++;
  }
  
  if (result != '\0') {
    cout << "First non-repeating character is: " << result << endl;
  } else {
    cout << "No non-repeating character found." << endl;
  }
  
  return 0;
}
