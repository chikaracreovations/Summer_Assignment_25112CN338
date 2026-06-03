#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start: ";
    cin >> start;
    cout << "Enter end: ";
    cin >> end;
    cout << "Armstrong numbers: ";
    for (int i = start; i <= end; i++) {
        int temp = i;
        int dc = 0;
        while (temp != 0) {
            dc++;
            temp /= 10;
        }
        temp = i;
        int sum = 0;
        while (temp != 0) {
            int rem = temp % 10;
            sum += pow(rem, dc);
            temp /= 10;
        }
        if (sum == i) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
