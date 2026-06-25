#include <iostream>
using namespace std;

int main() {
  char str[200];
  cout << "Enter a sentence: ";
  cin.getline(str, 200);
  
  char longest[100] = "";
  int max_len = 0;
  
  char current[100] = "";
  int cur_len = 0;
  
  int i = 0;
  while (true) {
    if (str[i] == ' ' || str[i] == '\0') {
      if (cur_len > max_len) {
        max_len = cur_len;
        for (int j = 0; j < cur_len; j++) {
          longest[j] = current[j];
        }
        longest[cur_len] = '\0';
      }
      cur_len = 0;
      if (str[i] == '\0') {
        break;
      }
    } else {
      current[cur_len] = str[i];
      cur_len++;
    }
    i++;
  }
  
  cout << "Longest word is: " << longest << endl;
  return 0;
}
