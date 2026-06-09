#include <iostream>
using namespace std;

int main( ) {
     int n;
    cout<< "Enter a number: ";
   cin >> n;
    int product = 1;
     int temp= n ;
     while( temp != 0) {
         product*= temp % 10 ;
        temp=temp  /10;
    }
   cout<< "Product of digits: " << product << endl;
    return 0;
}
