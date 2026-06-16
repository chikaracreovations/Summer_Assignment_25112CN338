#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int expected_sum = 0;
    for (int i = 1; i <= n + 1; i++) {
        expected_sum = expected_sum + i;
    }
    
    int actual_sum = 0;
    for (int i = 0; i < n; i++) {
        actual_sum = actual_sum + arr[i];
    }
    
    int ans = expected_sum - actual_sum;
    cout << "Missing number is: " << ans << endl;
    return 0;
}
