#include <iostream>
using namespace std;

int main() {
  char str1[100], str2[100];
  cout << "Enter first string: ";
  cin >> str1;
  cout << "Enter second string: ";
  cin >> str2;
  
  int f1[256] = {0}, f2[256] = {0};
  
  int i = 0;
  while (str1[i] != '\0') {
    f1[(int)str1[i]]++;
    i++;
  }
  
  i = 0;
  while (str2[i] != '\0') {
    f2[(int)str2[i]]++;
    i++;
  }
  
  cout << "Common characters: ";
  for (int j = 0; j < 256; j++) {
    if (f1[j] > 0 && f2[j] > 0) {
      cout << (char)j << " ";
    }
  }
  cout << endl;
  return 0;
}
