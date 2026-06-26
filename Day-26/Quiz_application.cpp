#include <iostream>
using namespace std;

int main() {
  int score = 0;
  char ans;
  
  cout << "Welcome to the C++ Quiz!" << endl;
  
  cout << "\nQ1. What is the correct operator to compare two values?" << endl;
  cout << "A. =" << endl;
  cout << "B. ==" << endl;
  cout << "C. ===" << endl;
  cout << "D. <=" << endl;
  cout << "Your answer (A/B/C/D): ";
  cin >> ans;
  if (ans == 'B' || ans == 'b') {
    cout << "Correct!" << endl;
    score++;
  } else {
    cout << "Wrong! Correct answer is B." << endl;
  }
  
  cout << "\nQ2. Which of the following is used for comments in C++?" << endl;
  cout << "A. //" << endl;
  cout << "B. /*" << endl;
  cout << "C. #" << endl;
  cout << "D. Both A and B" << endl;
  cout << "Your answer (A/B/C/D): ";
  cin >> ans;
  if (ans == 'D' || ans == 'd') {
    cout << "Correct!" << endl;
    score++;
  } else {
    cout << "Wrong! Correct answer is D." << endl;
  }
  
  cout << "\nQ3. Which header file is used for input/output in C++?" << endl;
  cout << "A. <iostream>" << endl;
  cout << "B. <conio.h>" << endl;
  cout << "C. <stdio.h>" << endl;
  cout << "D. <string>" << endl;
  cout << "Your answer (A/B/C/D): ";
  cin >> ans;
  if (ans == 'A' || ans == 'a') {
    cout << "Correct!" << endl;
    score++;
  } else {
    cout << "Wrong! Correct answer is A." << endl;
  }
  
  cout << "\nYour final score is: " << score << "/3" << endl;
  return 0;
}
