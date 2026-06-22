#include <iostream>
using namespace std;

int main() {
  char str[100];
  cout << "Enter a string: ";
  cin >> str;
  
  int freq[256] = {0};
  
  int i = 0;
  while (str[i] != '\0') {
    freq[(int)str[i]]++;
    i++;
  }
  
  cout << "Character frequencies: " << endl;
  for (int j = 0; j < 256; j++) {
    if (freq[j] > 0) {
      cout << (char)j << " : " << freq[j] << endl;
    }
  }
  
  return 0;
}
