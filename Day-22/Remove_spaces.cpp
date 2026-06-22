#include <iostream>
using namespace std;

int main() {
  char str[200], result[200];
  cout << "Enter a sentence: ";
  cin.getline(str, 200);
  
  int i = 0, j = 0;
  while (str[i] != '\0') {
    if (str[i] != ' ') {
      result[j] = str[i];
      j++;
    }
    i++;
  }
  result[j] = '\0';
  
  cout << "String after removing spaces: " << result << endl;
  return 0;
}
