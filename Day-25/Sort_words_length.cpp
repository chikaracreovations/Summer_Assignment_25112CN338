#include <iostream>
#include <string>
using namespace std;

int main() {
  string sentence;
  cout << "Enter a sentence: ";
  getline(cin, sentence);
  
  string words[100];
  int count = 0;
  
  string current = "";
  for (int i = 0; i <= sentence.length(); i++) {
    if (i == sentence.length() || sentence[i] == ' ') {
      if (current != "") {
        words[count++] = current;
        current = "";
      }
    } else {
      current += sentence[i];
    }
  }
  
  for (int i = 0; i < count - 1; i++) {
    for (int j = 0; j < count - i - 1; j++) {
      if (words[j].length() > words[j + 1].length()) {
        string temp = words[j];
        words[j] = words[j + 1];
        words[j + 1] = temp;
      }
    }
  }
  
  cout << "Words sorted by length: ";
  for (int i = 0; i < count; i++) {
    cout << words[i] << " ";
  }
  cout << endl;
  return 0;
}
