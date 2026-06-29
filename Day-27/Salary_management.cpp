#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  double basic, hra, da, gross, tax, net;
  
  cout << "Enter Employee Name: ";
  getline(cin, name);
  cout << "Enter Basic Salary: ";
  cin >> basic;
  
  hra = basic * 0.20;
  da = basic * 0.50;
  gross = basic + hra + da;
  tax = gross * 0.10;
  net = gross - tax;
  
  cout << "\n--- Salary Details for " << name << " ---" << endl;
  cout << "Basic Salary : Rs. " << basic << endl;
  cout << "HRA (20%)    : Rs. " << hra << endl;
  cout << "DA (50%)     : Rs. " << da << endl;
  cout << "Gross Salary : Rs. " << gross << endl;
  cout << "Tax Deduct   : Rs. " << tax << endl;
  cout << "Net Salary   : Rs. " << net << endl;
  
  return 0;
}
