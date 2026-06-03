#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int maxFact = -1;
    while (n % 2 == 0) {
        maxFact = 2;
        n /= 2;
    }
    for (int i = 3; i <= n; i += 2) {
        while (n % i == 0) {
            maxFact = i;
            n /= i;
        }
    }
    cout << "Largest prime factor: " << maxFact << endl;
    return 0;
}
