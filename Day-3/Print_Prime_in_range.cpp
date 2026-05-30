#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

   cout << "Prime numbers in the range " << start << " to " << end << " are: " << endl; 
   for (int i = start; i <= end ; i++) {
   
    int isPrime = 1;

    if (i <= 1) {
        isPrime = 0;
    } else {
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime==1) {
        cout << i << endl;
    } 
}

    return 0;
}