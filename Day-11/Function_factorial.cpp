#include <iostream>
using namespace std;

long  long factorial(int n) {
    long long f= 1;
    for(int i=1; i  <= n;i ++) {
         f= f*i ;
    }
    return f;
}
int main() {
    int x;
   cout <<"Enter a number: " ;
     cin >>x;
    cout<<"Factorial: " <<factorial ( x) << endl ;
    return 0;
}
