#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cout << "Enter a binary number: ";
    cin >> n;
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        dec = dec + rem * pow(2, i);
        n = n / 10;
        i++;
    }
    cout << "Decimal: " << dec << endl;
    return 0;
}
