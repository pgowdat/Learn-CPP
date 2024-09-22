#include<iostream>
using namespace std;

//forward declaration
class complex;

class calculator{
    public:
    int  add(int a,int b )
    {
        return(a+b);
    }
    int sumreal(complex ,complex );  
    int sumcomp(complex ,complex );  
    
    //void printc();
    //int  setNumbercal();
};
class complex
{
    int a;
    int b;

    //individually declaring function as friends
    // friend int calculator::sumreal(complex ,complex );
    // friend int calculator::sumcomp(complex ,complex );

    //declaring entire class calcuator as friend .
    friend class calculator;

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    
    void Printnumber()
    {
        cout << "Your complex number is " << a << " +" << b << "i" << endl;
    }
};

int calculator::sumreal(complex o1,complex o2){
        complex o3;
        o3.setNumber(1,2);//
        return(o1.a+o2.a);
    }
int calculator::sumcomp(complex o1,complex o2){
        return(o1.b+o2.b);
    }
// void calculator::printc(){
//         Printnumber();
//     }
// void calculator::setNumbercal(int c,int d){
//         Printnumber(int c,int d);
//     }


int main(){
    complex x1,x2,x3;
    x1.setNumber(1,4);
    x1.Printnumber();
    x2.setNumber(3,7);
    x2.Printnumber();
    
    calculator calc,x4;
    int res=calc.sumreal(x1,x2);
    cout<<" the sum of real part of x1 & x2 is "<<res<<endl;  
    int resc=calc.sumcomp(x1,x2);
    cout<<" the sum of complex part of x1 & x2 is "<<resc<<endl;
    x3.setNumber(res,resc);
    x3.Printnumber();
    
   
    // calc.setNumbercal(3,7);
    // calc.printc();

    

    return 0;
}
