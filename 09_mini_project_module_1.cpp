#include <iostream>
using namespace std;

void readMarks(int marks[], int n);
int findTotal(int marks[], int n);
double findAverage(int marks[], int n);
int findHighest(int marks[], int n);
int findLowest(int marks[], int n);
int countPassed(int marks[], int n);
void printReport(int marks[], int n);

void readMarks(int marks[], int n) {
    cout << "Enter the marks of " << n << " students: ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }
}

int findTotal(int marks[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}

double findAverage(int marks[], int n) {
    int total = findTotal(marks, n);
    return (double)total / n;
}

int findHighest(int marks[], int n) {
    int highest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    return highest;
}

int findLowest(int marks[], int n) {
    int lowest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    return lowest;
}

int countPassed(int marks[], int n) {
    int passed = 0;
    for (int i = 0; i < n; i++) {
        if (marks[i] >= 80) {
            passed++;
        }
    }
    return passed;
}

void printReport(int marks[], int n) {
    int total = findTotal(marks, n);
    double avg = findAverage(marks, n);
    int highest = findHighest(marks, n);
    int lowest = findLowest(marks, n);
    int passed = countPassed(marks, n);
    int failed = n - passed;

    cout << "\n------------------------------------\n";
    cout << "          STUDENT REPORT            \n";
    cout << "------------------------------------\n";
    cout << "Total Students : " << n << "\n";
    cout << "Total Marks    : " << total << "\n";
    cout << "Class Average  : " << avg << "\n";
    cout << "Highest Mark   : " << highest << "\n";
    cout << "Lowest Mark    : " << lowest << "\n";
    cout << "Passed Students: " << passed << "\n";
    cout << "Failed Students: " << failed << "\n";
    cout << "------------------------------------\n";
}

int main() {
    char repeat;
    do {
        int n;
        do {
            cout << "Enter number of students (1 - 100): ";
            cin >> n;
         if (n < 1 || n > 100) {
                cout << "Invalid! Please enter a number between 1 and 100.\n";
            }
        } while (n < 1 || n > 100);

        int* marks = new int[n];
        readMarks(marks, n);
        printReport(marks, n);
        delete[] marks;
        marks = nullptr;

        cout << "\nDo you want to run another analysis? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
cout << "\nThank you! Program ended.\n";
    return 0;
}