#include <iostream>
using namespace std;

int main() {
  char str1[100], str2[100];
  cout << "Enter first string: ";
  cin >> str1;
  cout << "Enter second string: ";
  cin >> str2;
  
  // Find lengths of both strings
  int len1 = 0, len2 = 0;
  while (str1[len1] != '\0') {
    len1++;
  }
  while (str2[len2] != '\0') {
    len2++;
  }
  
  int isAnagram = 1;
  
  if (len1 != len2) {
    isAnagram = 0;
  } else {
    for (int i = 0; i < len1; i++) {
      int found = 0;
      for (int j = 0; j < len2; j++) {
        if (str1[i] == str2[j]) {
          found = 1;
          str2[j] = '*'; // Mark character as used so it won't be matched again
          break;
        }
      }
      if (found == 0) {
        isAnagram = 0;
        break;
      }
    }
  }
  
  if (isAnagram == 1) {
    cout << "Strings are anagrams." << endl;
  } else {
    cout << "Strings are not anagrams." << endl;
  }
  
  return 0;
}
