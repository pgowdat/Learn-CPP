/* single inheritance deep dive */

#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default no inheritable

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base::setdata(void)
{
    data1 = 10;
    data2 = 11;
}
int Base::getdata1()
{
    return data1;
}
int Base::getdata2()
{
    return data2;
}
class Derived : private Base  //visbility mode private 
{
    int data3;

public:
    void process();
    void display();
};
// class is being derived publically

void Derived ::process()
{
    
    setdata();
    data3 = data2 * getdata1();
}
void Derived ::display()
{
    cout << "the value of data1 is " << getdata1() << endl; //
    cout << "the value of data2 is " << data2 << endl;
    cout << "the value of data3 is " << data3 << endl;
}
int main()
{
    Derived der;
    // der.setdata(4,7);
    der.process();
    der.display();
    return 0;
}