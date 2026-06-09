#include <iostream>
using namespace std;

int rev = 0 ;
void reverseNum (int n) {
     if(n== 0 ) {
        return;
    }
     rev=rev * 10+(n%10);
    reverseNum(n / 10);
}
int main () {
     int n;
    cout<<"Enter a number: ";
     cin >>n;
    reverseNum ( n);
    cout <<"Reversed: " <<rev << endl ;
    return 0;
}
