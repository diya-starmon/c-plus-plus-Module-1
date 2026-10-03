#include <iostream>
#include <string>
using namespace std;

int main() {
    // Name and Age Input
    string name;
    int age;
    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); // Prevents skipping full name input
    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Name: " << name << ", Age: " << age << endl;
    return 0;
}