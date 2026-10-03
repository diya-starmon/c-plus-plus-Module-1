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


//if else practice
#include <iostream>
using namespace std;
int main() {
    int x=10;
    if (x>0){
        cout << "x is positive" << endl;
    }
    else if (x<0){
        cout << "x is negative" << endl;
    }
    else{
        cout << "x is zero" << endl;
    }

    return 0;
}
       //OUTPUT : x is positive


//Even / Odd check using if else

#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number:";
    cin >> x;
if (x%2==0){
    cout <<"Even";}
else{
    cout <<"Odd";
}
return 0;
}
//if entered number is an even number then output will be Even and if entered number is an odd number then output will be Odd


//LARGEST OF TWO NUMBERS

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter another number:";
    cin>>b;
if (a>b){
    cout<<"a is the greatest number";
}
else if(b>a){
    cout<<"b is greater than a";
}
else{
    cout<<"both numbers are equal";
}
return 0;}


//GREATEST OF THREE NUMBERS
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter another number:";
    cin>>b;
    cout<<"Enter another number:";
    cin>>c;
if (a>b && a>c){
cout<<"a is the greatest number";
}
else if(b>a && b>c){
    cout<<"b is greater than a and c";
}
else if(c>a && c>b){
    cout<<"c is greater than a and b";
}
else{
    cout<<"all numbers are equal";
}
return 0;
}

//GRADE CALCULATOR

#include <iostream>
using namespace std;

int main(){
    char A,B,C,D;
    int marks;

    cout<<"Enter your marks:";
    cin>>marks;
if (marks>=90 && marks<=100){
    cout<<"Grade is A";}
else if(marks>=80&&marks<90){
    cout<<"Grade is B";}
else if(marks<=70&&marks<80){
    cout<<"Grade is C";}
if (marks>=60&&marks<70){
    cout<<"Grade is D";}
else{
    cout<<"Fail";}

return 0;}


//ELECTRICITY BILL CALCULATOR

#include <iostream>
using namespace std;
int main(){
    int units;
    cout<<"Enter units counsumed:";
    cin>>units;
if(units<=100){
cout<<"total_bill:"<<units*5;}
else if(units<=200){
cout<<"total_bill:"<<100*5+(units-100)*7;
}
else{
cout<<"total_bill:"<<100*5+100*7+(units-200)*10;
}

return 0;}


