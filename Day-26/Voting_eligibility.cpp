#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  int age;
  
  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your age: ";
  cin >> age;
  
  if (age >= 18) {
    cout << "Hello " << name << ", you are eligible to vote!" << endl;
  } else {
    int wait = 18 - age;
    cout << "Hello " << name << ", you are not eligible to vote." << endl;
    cout << "You need to wait " << wait << " more year(s) to vote." << endl;
  }
  
  return 0;
}
