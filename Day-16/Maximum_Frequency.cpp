#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int max_count = 0;
    int ans = arr[0];
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count = count + 1;
            }
        }
        if (count > max_count) {
            max_count = count;
            ans = arr[i];
        }
    }
    
    cout << "Element with maximum frequency is: " << ans << endl;
    return 0;
}
