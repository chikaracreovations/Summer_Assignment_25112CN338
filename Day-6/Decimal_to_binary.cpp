#include <iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter a decimal number: ";
     cin >>n ;
    long long bin = 0;
   int rem, i=1 ;
    int temp=n;
     while(temp!=0) {
        rem =temp% 2 ;
        bin=  bin+ rem * i ;
        temp= temp/2;
        i = i*  10;
    }
    cout<<"Binary: " << bin<<endl;
   return 0;
}
