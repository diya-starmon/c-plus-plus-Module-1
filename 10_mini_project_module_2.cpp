 #include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    void display() {
        cout << rollNo << " | "
             << name << " | "
             << marks << endl;
    }

    void result() {
        if (marks >= 40)
            cout << name << " : PASS" << endl;
        else
            cout << name << " : FAIL" << endl;
    }
};

int main() {

    Student s[3] = {
        Student(101, "Asha", 82),
        Student(102, "Rahul", 35),
        Student(103, "Meera", 65)
    };

    cout << "STUDENT DETAILS" << endl;

    for (int i = 0; i < 3; i++) {
        s[i].display();
    }

    cout << "\nSTUDENT RESULTS" << endl;

    for (int i = 0; i < 3; i++) {
        s[i].result();
    }

    return 0;
}