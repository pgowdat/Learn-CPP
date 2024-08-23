/* single inheritance deep dive */

#include <iostream>
using namespace std;

class Base{
    int data1; //private by default no inheritable 

public:
    int data2;
    void setdata(int x,int y){
        data1=x;
        data2=y;
    }
    int getdata1(){
        return data1;
    }
    int getdata2(){
        return data2;
    }
} ;
class Derived : public Base{
    int data3;
    public:
    void process();
    void display();
};
 // class is being derived publically

void Derived :: process(){
    data3=data2*getdata1();
    }
void Derived :: display(){
    cout<<"the value of data1 is "<<getdata1()<<endl; //
    cout<<"the value of data2 is "<<data2<<endl;
    cout<<"the value of data3 is "<<data3<<endl;
    }
int main(){
    Derived der;
    der.setdata(4,7);
    //cout<<der.getdata1();
    der.process();
    der.display();
    return 0;
}