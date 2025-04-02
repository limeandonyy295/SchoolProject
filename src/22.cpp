#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Array size must be greater than zero." << endl;
        return 1;
    }
    
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }
    
    cout << "Array elements are: ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}
