// PRACTICE 1.6: Identify the Parts

#include <iostream> //Header file
using namespace std; //Header file 
int main()//main function
{
    cout<<"Hello World!";//print statement 
    return 0;//return statement
}


// PRACTICE 1.7: Find the Error

//WRONG CODE:
       #include <iostream>
using namespace std

int main() {
    cout << "Hello"
    return 0;
}

//CORRECTED CODE:
       #include <iostream>
using namespace std;

int main() {
    cout << "Hello";
    return 0;
}
//Mistake were : no semicolon after namespace std and cout <<"Hello"


//PRACTICE 1.8: Output Prediction
 
#include <iostream>
using namespace std;

int main() {
    cout << "A";
    cout << "B";
    cout << "C";

    return 0;
}

//Output: ABC becaz no endl or \n is used so it will all be printed in the same line.
