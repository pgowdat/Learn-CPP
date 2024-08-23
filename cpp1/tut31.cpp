//constructor overloading 

#include<iostream>
using namespace std;


class complex
{
    int a, b;

public:
    // constructor declaration
    complex(int x, int y) //-----> this is a parameterized constructor,it take 2 parameters.

    {
        a = x;
        b = y;
    }

    complex(int x) 

    {
        a = x;
        b = 3;
    }

    complex() 

    {
        a = 1;
        b = 2;
    }




    void Printnumber()
    {
        cout << "Your complex number is " << a << " +" << b << "i" << endl;
    }
};



int main(){
    complex c1(4,5);
    c1.Printnumber();

    complex c2(4);
    c2.Printnumber();

    complex c3;
    c3.Printnumber();
    return 0;
}
