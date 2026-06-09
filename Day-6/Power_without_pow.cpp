#include <iostream>
using namespace std;

int main() {
    double x;
    int n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter power (n): ";
    cin >> n;
    double ans = 1;
    int p = n;
    if (n < 0) {
        p = -n;
    }
    for (int i = 1; i <= p; i++) {
        ans = ans * x;
    }
    if (n < 0) {
        ans = 1.0 / ans;
    }
    cout << "Result: " << ans << endl;
    return 0;
}
