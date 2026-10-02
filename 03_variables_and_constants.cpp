 //3.7 Practice
 //Declare a variable to store temperature, then assign it a value on the next line

 #include <iostream>
 using namespace std;
 int main(){
    int temperature = 34;
    cout<<"TODAY'S TEMPERATURE IS:"<<temperature<<""<<"degree celcius";
    return 0;
 }
 //OUTPUT: TODAY'S TEMPERATURE IS:34 degree celcius


 //Create a constant for the number of days in a week.

 #include <iostream>
 using namespace std;
 int main(){
    const int DAYS_IN_A_WEEK = 7;
    cout <<"Days in a week = "<<DAYS_IN_A_WEEK;
    return 0;
 }
 //OUTPUT: Days in a week = 7


 //what is wrong with: const int MAX;?
 //answer: the const variable MAX is not initialized with a value ie it should be like const int MAX= 100(ANY VALUE)