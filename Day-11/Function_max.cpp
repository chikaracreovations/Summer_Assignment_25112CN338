#include <iostream>
using namespace std;

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Maximum: " << findMax(x, y) << endl;
    return 0;
}
