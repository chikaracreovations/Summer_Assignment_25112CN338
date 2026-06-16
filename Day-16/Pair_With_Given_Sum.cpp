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
    
    int target;
    cout << "Enter the target sum: ";
    cin >> target;
    
    int flag = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            break;
        }
    }
    
    if (flag == 0) {
        cout << "No pair found with the given sum" << endl;
    }
    return 0;
}
