#include <iostream>
using namespace std;
int  main() {
    int n;
    cout<<"Enter a number: ";
     cin>>n;
    int count=  0;
    int  temp=n;
    while(temp>0) {
        if( temp % 2 ==1 ) {
             count++;
       }
       temp =  temp  / 2;
    }
    cout <<  "Number of set bits: "  << count<<endl;
   return 0;
}
