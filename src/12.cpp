#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string studentName;
    int studentAge;
    vector<string> subjects;

    // Get the student's name and age from the user
    cout << "Enter your name: ";
    getline(cin, studentName);
    cout << "Enter your age: ";
    cin >> studentAge;

    // Get the list of subjects from the user
    cout << "Enter the list of subjects you are interested in (separated by commas): ";
    getline(cin, subjects);

    // Print the information to the screen
    cout << "Your name is: " << studentName << endl;
    cout << "You are " << studentAge << " years old." << endl;
    cout << "The list of subjects you are interested in is: " << subjects << endl;

    return 0;
}
