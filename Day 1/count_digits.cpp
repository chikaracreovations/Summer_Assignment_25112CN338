#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    int temp = n;
    if (temp == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }
    }
    cout << "Number of digits: " << count << endl;
    return 0;
}
