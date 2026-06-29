#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  int roll;
  float s1, s2, s3, s4, s5;
  
  cout << "Enter Student Name: ";
  getline(cin, name);
  cout << "Enter Roll Number: ";
  cin >> roll;
  
  cout << "Enter marks of 5 subjects (out of 100): " << endl;
  cin >> s1 >> s2 >> s3 >> s4 >> s5;
  
  float total = s1 + s2 + s3 + s4 + s5;
  float percentage = total / 5.0;
  
  char grade;
  if (percentage >= 90) grade = 'A';
  else if (percentage >= 80) grade = 'B';
  else if (percentage >= 70) grade = 'C';
  else if (percentage >= 60) grade = 'D';
  else if (percentage >= 40) grade = 'E';
  else grade = 'F';
  
  cout << "\n================================" << endl;
  cout << "            MARKSHEET           " << endl;
  cout << "================================" << endl;
  cout << "Name: " << name << "\tRoll: " << roll << endl;
  cout << "--------------------------------" << endl;
  cout << "Subject 1: " << s1 << endl;
  cout << "Subject 2: " << s2 << endl;
  cout << "Subject 3: " << s3 << endl;
  cout << "Subject 4: " << s4 << endl;
  cout << "Subject 5: " << s5 << endl;
  cout << "--------------------------------" << endl;
  cout << "Total Marks: " << total << "/500" << endl;
  cout << "Percentage : " << percentage << "%" << endl;
  cout << "Grade      : " << grade << endl;
  cout << "================================" << endl;
  
  return 0;
}
