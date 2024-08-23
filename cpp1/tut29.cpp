#include<iostream>
using namespace std;

 
    // Constructor is a special member function with same as that of class.
    //it is automatically invoked,whenever object is created.
    // it is used to initialize the object of its class.
class complex{
    int a,b;

    public:
    //constructor declaration
    complex(void);
    void Printnumber()
    {
        cout << "Your complex number is " << a << " +" << b << "i" << endl;
    }
};

complex::complex(void) //-----> this is a default constructor , it accepts mo parameters.
{
    a=23;
    b=12;
}


int main(){
    complex c1;
    c1.Printnumber();
    return 0;
}


/*characteristics of constructors 

1.it should be declared in public section of class.
2. they are automatically invoked when they objects are created.
3. they cant return values and they dont have return types.
4.they can have default arguments.
5.we can't refer to their address.




*/