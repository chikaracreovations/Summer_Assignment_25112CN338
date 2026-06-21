#include <iostream>
using namespace std;

int main() {
  char str[100];
  cout << "Enter a string: ";
  cin >> str;
  
  int vowels = 0, consonants = 0;
  
  int i = 0;
  while (str[i] != '\0') {
    char ch = str[i];
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      vowels++;
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
      consonants++;
    }
    i++;
  }
  
  cout << "Vowels: " << vowels << endl;
  cout << "Consonants: " << consonants << endl;
  return 0;
}
