#include<iostream>
using namespace std;

 
    // Constructor is a special member function with same as that of class.
    //it is automatically invoked,whenever object is created.
    // it is used to initialize the object of its class.
class complex{
    int a,b;

    public:
    //constructor declaration
    complex(int,int);
    void Printnumber()
    {
        cout << "Your complex number is " << a << " +" << b << "i" << endl;
    }
};

complex::complex(int x,int y) //-----> this is a parameterized constructor,it take 2 parameters.
 
{
    a=x;
    b=y;
}


int main(){
    //implicit call
    complex c1(1,3);
    c1.Printnumber();

    //explicit call
    complex b1 = complex(4,6);
    b1.Printnumber();
    
    return 0;
}
