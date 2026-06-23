#include <iostream>
using namespace std;

int main() {
  char str[100];
  cout << "Enter a string: ";
  cin >> str;
  
  int max_count = 0;
  char ans = '\0';
  
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
    
    if (count > max_count) {
      max_count = count;
      ans = str[i];
    }
    i++;
  }
  
  cout << "Maximum occurring character is: " << ans << endl;
  return 0;
}
