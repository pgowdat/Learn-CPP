#include <iostream>
using namespace std;

/*Ambiguity in inheritance can be defined as when one class is derived for two or more base 
classes then there are chances that the base classes have functions with the same name.
eg: greet() 
To solve this ambiguity scope resolution operator is used “::” */

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        int b=11;
        void greet()
        {
            cout << "Kaise ho?" << endl;
        }
};


class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){
        Base1 :: greet();
    }
};



int main(){
  // Ambibuity 1
     Base1 base1obj;
     Base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     Derived d;
     d.greet();
     cout<<d.b;

    return 0;
}