#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int a = num1;
    int b = num2;
    int gcd = 1;

    for (int i = 1; i <= min(abs(a), abs(b)); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    long long lcm = (long long)(a * b) / gcd;

    cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}