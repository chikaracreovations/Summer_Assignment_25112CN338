#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int reverse = 0;
    int temp = n;
    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }
    cout << "Reverse of the number: " << reverse << endl;
    return 0;
}