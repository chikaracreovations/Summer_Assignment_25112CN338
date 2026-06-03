#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a = 0, b = 1, c;
    if (n == 1) {
        cout << a << endl;
        return 0;
    }
    if (n == 2) {
        cout << b << endl;
        return 0;
    }
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << "Nth Fibonacci term is: " << b << endl;
    return 0;
}
