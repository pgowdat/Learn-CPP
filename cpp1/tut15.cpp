#include<iostream>
using namespace std;

// formal parameters/parameters
// int sum(int a, int b) -----> acceptable
// int sum(int a,  b) -----> not acceptable
// int sum(int , int ) -----> acceptable

//formal parameters a and b will take values ftom actual parametrs/argurments

// int sum(int a, int b){
//     int c=a+b;
//     cout<<c<<endl;
//     return c;
// }


// here x & y copied to c & d, changing c & d doesnt change the value of x & y
// void swap(int c,int d){
//     int temp=c;
//     c=d;
//     d=temp;
// }


// void swapPointer(int* c,int* d){
//     int temp=*c;
//     *c=*d;
//     *d=temp;


 //call by reference by using c++ reference variables
 void swapReferenceVar(int &c,int &d){
    int temp=c;
    c=d;
    d=temp;

}

int main(){
    // num1,num2 are arguments / actual parameters .
    // int num1,num2;
    // cout<<"enter num1 "<<endl;
    // cin>>num1;
    // cout<<"enter num1 "<<endl;
    // cin>>num2;
    // sum(num1,num2);
    int x=4,y=5;
    cout<<"the value of x and y beofre swapp "<<x<<" "<<y<<endl;
    // swap(x,y) will not swap x and y 
    // swap(x,y);

    //call by reference by using pointers.
    // swapPointer(&x,&y); // this will swap x & y by using pointers

    //call by reference by using reference variables.
    swapReferenceVar(x,y); // this will swap x & y by using reference variables 
    cout<<"the value of x and y after swapp "<<x<<" "<<y<<endl;
    return 0;

    return 0;
}