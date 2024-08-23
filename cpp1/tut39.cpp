#include<iostream>
using namespace std;
/*
                         public derivation       private derivation    protected derivation

1)private members        not inherited           not inherited          not inherited
2)protected members       protected               private                protected
3)public members          public                  private                protected

Protected access modifiers are similar to the private access modifiers but protected access modifiers can be accessed 
in the derived class whereas private access modifiers cannot be accessed in the derived class
*/
class Base{
    protected:
    int a;
    private:
    int b;
    
};
class Derived: public Base{
    int d=1;
     public:
     int c=11;
};
int main(){
    Base obj1;
    Derived obj2;

    // cout<<obj2.b<<endl;
    // cout<<obj2.a<<endl; // will not work since protected in both base and derived
    // cout<<obj1.a<<endl; // will not work since protected in both base and derived
    // cout<<obj1.b<<endl; // will not work since private in both base and derived
    //cout<<obj2.d<<endl; // will not work since  private in both base and derived
    cout<<obj2.c<<endl; 
   //cout<<obj1.a<<endl; 
    


    return 0;
}