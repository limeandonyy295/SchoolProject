#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> subjects = {"Math", "Science", "English"};
    string subject;
    cout << "Enter your subject: ";
    cin >> subject;
    if (subjects.contains(subject)) {
        cout << "You have selected: " << subject << endl;
    } else {
        cout << "Invalid selection, please try again." << endl;
    }
    return 0;
}
