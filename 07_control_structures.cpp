#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {   
        if (i % 2 == 0) continue;   //Output = 1,3,5 
        cout << i << " ";
    } 
    cout << endl;

    // Even / Odd check
    int n = 4;
    if (n % 2 == 0) cout << "Even" << endl;
    else cout << "Odd" << endl;
//output : Even 
    return 0;  
}