#include <iostream>
using namespace std;

int main() {
  char str[100];
  cout << "Enter a string: ";
  cin >> str;
  
  char compressed[200];
  int k = 0;
  
  int i = 0;
  while (str[i] != '\0') {
    char current = str[i];
    int count = 0;
    while (str[i] != '\0' && str[i] == current) {
      count++;
      i++;
    }
    compressed[k++] = current;
    if (count < 10) {
      compressed[k++] = (char)(count + '0');
    } else {
      compressed[k++] = (char)((count / 10) + '0');
      compressed[k++] = (char)((count % 10) + '0');
    }
  }
  compressed[k] = '\0';
  
  cout << "Compressed string: " << compressed << endl;
  return 0;
}
