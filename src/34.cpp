#include <iostream>

using namespace std;

int main() {
    int age = 18;
    char gender = 'M';
    
    if (age >= 18 && !gender == 'F') {
        cout << "You are an adult and your gender is not F." << endl;
    } else {
        cout << "Congratulations! You are a young person." << endl;
    }
    
    return 0;
}
