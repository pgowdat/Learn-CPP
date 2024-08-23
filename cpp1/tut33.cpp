/*dynamic initialization of objects using constructors 
The dynamic initialization of the object means that the object is initialized at the runtime. 
Dynamic initialization of the object using a constructor is beneficial when the data is of different formats*/

#include<iostream>
#include<math.h>

using namespace std;

class BankDeposit
{

    int principal;
    int years;
    float interestRate;
    float returnValue;

    public : 
    BankDeposit(){}; // THIS IS MANDATORY , IF REMOVED THROWS ERROR 
    // because for b1 we have BankDeposit(int p, int y, float r), for b2,b3 we haven't initialized 
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 14
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposit :: BankDeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    interestRate = float(R)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}
void BankDeposit ::show (){
   cout<<"principal amount was "<<principal<<endl
       <<"return value after "<<years
       <<" is "<<returnValue<<endl;
}

int main(){
    BankDeposit b1,b2,b3;
    int p,y;
    float r;
    int R;
    
    cout<<"Enter the value of p,y and r float"<<endl;
    cin>>p>>y>>r;
    b1=BankDeposit(p,y,r);
    b1.show();

    cout<<"Enter the value of p,y and r int "<<endl;
    cin>>p>>y>>R;
    b2=BankDeposit(p,y,R);
    b2.show();
    return 0;
}