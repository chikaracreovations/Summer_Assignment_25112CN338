#include <iostream>
using namespace std;

int main() {
    int r;
    cout << "Enter number of rows: ";
    cin >> r;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= r - i; j++) {
            cout << "  ";
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        ch -= 2;
        for (int j = 1; j < i; j++) {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
    return 0;
}
