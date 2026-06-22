#include <iostream>
using namespace std;

int main() {
  char str[200];
  cout << "Enter a sentence: ";
  cin.getline(str, 200);
  
  int words = 0;
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
      words++;
    }
    i++;
  }
  
  if (str[0] != '\0' && str[0] != ' ') {
    words++;
  }
  
  cout << "Word count is: " << words << endl;
  return 0;
}
