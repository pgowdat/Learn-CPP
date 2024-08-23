/*
Inheritance is a feature or a process in which, new classes are created from the
 existing classes. The new class created is called “derived class” or “child class” 
 and the existing class is known as the “base class” or “parent class”.

The class that inherits properties from another class is called "Subclass or Derived Class". 
The class whose properties are inherited by a subclass is called "Base Class or Superclass".
*/

#include<iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 90.0;
    }
    Employee(){};
};

//derived class syntax 
/*
class {{derived-class-name}}:{{visibility-mode}} {{base-class-name}}
{
    member func/methods.....
}

default : private mode
publice mode : base class public mem will become derived class public mem
private mode : base class public mem will become derived class private mem
private mem are never inherited 
*/


// private mode access so members are private 
class programmer:Employee{
    public:
    int languageCode=9;
    programmer (int inpid, float sal){
        id= inpid;
        salary=sal;
        languageCode=10;
    }
    
    void getData(){
        cout<<id<<endl;
        cout<<salary<<endl;
    }
} ;


int main(){
    Employee pavan(1) , revanth(2);
    cout<<pavan.salary<<endl;
    cout<<pavan.id<<endl;
    cout<<revanth.salary<<endl;
    cout<<revanth.id<<endl;
    programmer skillF(3,100);
    cout<<skillF.languageCode<<endl;
    // cout<<skillF.salary<<endl;  // they had become private members so cant invoke directly 
    // cout<<skillF.id<<endl;
    skillF.getData();
    return 0;
}