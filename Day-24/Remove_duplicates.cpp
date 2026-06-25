#include <iostream>
using namespace std;

int main() {
  char str[100];
  cout << "Enter a string: ";
  cin >> str;
  
  char result[100];
  int k = 0;
  
  int i = 0;
  while (str[i] != '\0') {
    int found = 0;
    for (int j = 0; j < k; j++) {
      if (str[i] == result[j]) {
        found = 1;
        break;
      }
    }
    if (found == 0) {
      result[k++] = str[i];
    }
    i++;
  }
  result[k] = '\0';
  
  cout << "String after removing duplicates: " << result << endl;
  return 0;
}
