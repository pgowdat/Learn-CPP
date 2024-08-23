#include<iostream>
using namespace std;


/*C++ provides inline functions to reduce the function call overhead.
 An inline function is a function that is expanded in line when it is called. */

 /*Even if the function is called multiple times, space for the static variable is 
 allocated only once and the value of the variable in the previous call gets carried 
 through the next function call
 
 Basic Concepts in Object-Oriented Programming
Classes - Basic template for creating objects
Objects – Basic run-time entities
Data Abstraction & Encapsulation – Wrapping data and functions into a single unit
Inheritance – Properties of one class can be inherited into others
Polymorphism – Ability to take more than one forms
Dynamic Binding – Code which will execute is not known until the program runs
Message Passing – message (Information) call format

*/

inline int product(int a,int b){
    //not recomonded to use below lines with inline functions
    static int c=0; //this executes only once
    c=c+1; //next time this function is run value of c will be  retianed 
    return a*b+c;
}

float moneyRecieved(int currentMoney,float factor=2.05f){
    return currentMoney*factor;
}


// int strlen(const char *p){

// }


int main(){
    int a,b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    int money;
    cout<<"enter the money you have ? "<<endl;
    cin>>money;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"if you have "<<money<<" rupees in your account "
          "u will get "<<moneyRecieved(money)<<" after 1 year"<<endl;
    cout<<"if you have "<<money<<" rupees in your account "
          "u will get "<<moneyRecieved(money,1.5f)<<" after 1 year"<<endl;
    return 0;
}