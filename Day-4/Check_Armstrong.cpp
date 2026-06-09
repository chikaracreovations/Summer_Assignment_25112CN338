#include <iostream>
#include <cmath>
using namespace std;

int main () {
   int n,temp,rem ,sum= 0,dc = 0;
   cout << "Enter a number: ";
   cin>> n;
     temp =n;
    while(temp != 0) {
        dc++;
        temp/=10 ;
    }
     temp =n;
     while (temp !=0) {
         rem =temp %10;
        sum= sum+  pow  (rem,dc );
        temp/=  10;
   }
   if( sum== n ) {
        cout<< n  <<  " is an Armstrong number." << endl;
   }else   {
        cout<<n  <<" is not an Armstrong number."  <<endl;
    }
    return 0;
}
