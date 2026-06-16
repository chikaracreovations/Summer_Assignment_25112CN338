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
    
    int temp[n];
    int size = 0;
    
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == temp[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            temp[size] = arr[i];
            size = size + 1;
        }
    }
    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
    return 0;
}
