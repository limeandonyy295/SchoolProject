#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        for(int i = 1; i <= n; ++i) {
            cout << "*";
        }
    } else {
        for(int i = 1; i <= n - 1; ++i) {
            cout << " ";
        }
        cout << "*";
    }
}
