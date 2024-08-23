/*A copy constructor is a type of constructor that creates a copy of another object. 
If we want one object to resemble another object we can use a copy constructor. 
If no copy constructor is written in the program compiler will supply its own copy constructor.*/

#include <iostream>
using namespace std;

class Numbers
{
    int a;

public:
    Numbers(){};
    Numbers(int num)
    {
        a = num;
    }
    //when no copy constructor is found ,complier supplies its own copy contructor
    Numbers(Numbers &obj)
    {
        cout<<"copy constructor is called ";
        a = obj.a;
    }
    void display()
    {
        cout << "the number of this object is " << a << endl;
    }
};

int main()
{
    Numbers n1,n2,n3(15),z2;
    n1 = Numbers(12);
    n1.display();
    n2.display();
    n3.display();

    Numbers z1(n1);
    //z1 exactly should resemble z or x or y 
    z1.display();


    z2=n1; // copy contructor is not called
    z2.display();

    Numbers z3=n1; //copy contructor is invoked
    z3.display();
    return 0;
}