#include<iostream>

using namespace std;

int main(){

    //**************** REFERENCE VARIABLES ************ 
    // Pavan ----> gunda--->paONE---->powers
    float x=455;
    float &y=x;
    y =25;
    cout<<"the value of x is "<<x<<endl;
    cout<<"the value of y is "<<y<<endl;

    //**************** TYPE CASTING ****************
    // adding comment for tut7.cpp
    int a=45;
    float b=45.55;
    cout<<"\nThe value of a is: "<<float(a);
    cout<<"\nThe value of b is: "<<int(b);
    float c= float(a)/2;
    cout<<"\n the value of c : "<<c;

    cout<<"\nThe expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;


    return 0;
}
