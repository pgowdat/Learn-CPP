//Friends Function : it is an external function but
// it got some special permission to access private members of class
#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    //class should declare external func as its friend to give access to its private variables .
    //below line means that no member func -sumcomplex is allowed to anything with private mem of class.
    friend complex sumComplex(complex o1,complex o2);
    void Printnumber()
    {
        cout << "Your complex number is " << a << " +" << b << "i" << endl;
    }
};


// this function have no relation with class initially , it cant access private var of class.
complex sumComplex(complex o1,complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    complex c1,c2,sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);

    c1.Printnumber();
    c2.Printnumber();
    
    sum = sumComplex(c1,c2);
    sum.Printnumber();
    return 0;
}


/* properties of friend function 
1)not in the scope of class.
2)since its not in the class cannot be called from the object of the class i.e c1.sumcomplex()
3)can be invoked without the help of an object.
4)usually contains the arguments 
5)can be declared in public / private 
6)it cant access members directly by their names
 and needs object_name.member_name to access any member .*/