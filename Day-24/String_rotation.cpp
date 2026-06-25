#include <iostream>
using namespace std;

int main() {
  char str1[100], str2[100];
  cout << "Enter first string: ";
  cin >> str1;
  cout << "Enter second string: ";
  cin >> str2;
  
  int len1 = 0, len2 = 0;
  while (str1[len1] != '\0') len1++;
  while (str2[len2] != '\0') len2++;
  
  if (len1 != len2) {
    cout << "Not a rotation." << endl;
    return 0;
  }
  
  char concat[200];
  int idx = 0;
  for (int i = 0; i < len1; i++) {
    concat[idx++] = str1[i];
  }
  for (int i = 0; i < len1; i++) {
    concat[idx++] = str1[i];
  }
  concat[idx] = '\0';
  
  int found = 0;
  for (int i = 0; i <= idx - len2; i++) {
    int match = 1;
    for (int j = 0; j < len2; j++) {
      if (concat[i + j] != str2[j]) {
        match = 0;
        break;
      }
    }
    if (match == 1) {
      found = 1;
      break;
    }
  }
  
  if (found == 1) {
    cout << "Yes, it is a rotation." << endl;
  } else {
    cout << "No, it is not a rotation." << endl;
  }
  
  return 0;
}
