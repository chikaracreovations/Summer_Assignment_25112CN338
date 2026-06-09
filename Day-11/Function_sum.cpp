#include <iostream>
using  namespace std;
int sum (int a,int  b) {
    return a + b ;
}

int main () {
    int x,y;
     cout << "Enter first number: ";
   cin>>x;
    cout<<"Enter second number: ";
   cin>>y;
    int result = sum(x,y );
     cout <<"Sum: "<<result <<endl ;
   return  0;
}
