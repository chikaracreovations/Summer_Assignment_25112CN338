#include <iostream>
using namespace std;

int main ()  {
     int n, temp , rem ,sum=0;
     cout <<"Enter a number: " ;
    cin>>n;
    temp =n;
     while(temp !=  0 ) {
       rem=  temp%10;
        int fact =1;
         for(int i =1;i <= rem ;i++)  {
            fact *=i ;
        }
       sum+=fact;
        temp/= 10;
     }
    if(sum ==n ) {
        cout<<n << " is a strong number."<< endl;
    } else {
        cout<< n  <<  " is not a strong number." << endl;
   }
    return 0;
}
