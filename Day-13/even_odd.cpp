#include <iostream>
using namespace std;

int main() {
    int n, i;
    int even = 0, odd = 0;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter numbers: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    cout << "Even count: " << even << endl;
    cout << "Odd count: " << odd << endl;
    
    return 0;
}
