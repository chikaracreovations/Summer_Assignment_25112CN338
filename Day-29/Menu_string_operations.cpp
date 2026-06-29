#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cout << "Enter target string: ";
  getline(cin, str);
  
  int choice = 0;
  while (choice != 4) {
    cout << "\n--- String Menu ---" << endl;
    cout << "1. Check Palindrome" << endl;
    cout << "2. Convert to Uppercase" << endl;
    cout << "3. Count Vowels" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
      int isPal = 1;
      int len = str.length();
      for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
          isPal = 0;
          break;
        }
      }
      if (isPal == 1) cout << "The string is a palindrome." << endl;
      else cout << "The string is not a palindrome." << endl;
    } else if (choice == 2) {
      string upper = str;
      for (int i = 0; i < upper.length(); i++) {
        if (upper[i] >= 'a' && upper[i] <= 'z') {
          upper[i] = upper[i] - 32;
        }
      }
      cout << "Uppercase: " << upper << endl;
    } else if (choice == 3) {
      int count = 0;
      for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
          count++;
        }
      }
      cout << "Vowels count: " << count << endl;
    } else if (choice == 4) {
      cout << "Exiting string operations." << endl;
    } else {
      cout << "Invalid choice." << endl;
    }
  }
  
  return 0;
}
