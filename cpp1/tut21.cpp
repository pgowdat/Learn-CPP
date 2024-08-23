#include<iostream>
using namespace std;
/*
                              OOPS OVER STRUCTURE
we cannot hide data in structures which means that everything is public and can be accessed easily 
which is a major drawback of the structure because structures cannot be used where data security is a
 major concern. Another drawback of structures is that we cannot add functions in it.
 
 Basic Concepts in Object-Oriented Programming
Classes - Basic template for creating objects
Objects – Basic run-time entities
Data Abstraction & Encapsulation – Wrapping data and functions into a single unit
Inheritance – Properties of one class can be inherited into others
Polymorphism – Ability to take more than one forms
Dynamic Binding – Code which will execute is not known until the program runs
Message Passing – message (Information) call format
 */

class Employee
{
private:
    int a,b,c;
public:
    int d,e ;
    void setData(int a1,int b1,int c1);
    void getData();
};

void Employee::setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

void Employee::getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
}

int main(){
    Employee pavan;
    pavan.d=4;
    pavan.e=5;
    // pavan.a=1;
    // pavan.b=2;
    // pavan.c=3;
    pavan.setData(1,2,3);
    pavan.getData();
    // cout<<pavan.a<<endl;

    return 0;
}