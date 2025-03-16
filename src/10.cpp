// This is a simple school project that generates a random C++ code.
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int num = rand() % 10 + 1;
    string op;
    switch (num) {
        case 1:
            op = " + ";
            break;
        case 2:
            op = " - ";
            break;
        case 3:
            op = " * ";
            break;
        case 4:
            op = " / ";
            break;
        case 5:
            op = " % ";
            break;
        case 6:
            op = " + ";
            break;
        case 7:
            op = " - ";
            break;
        case 8:
            op = " * ";
            break;
        case 9:
            op = " / ";
            break;
        case 10:
            op = " % ";
            break;
    }
    cout << "The operation is: " << op << endl;
    return 0;
}