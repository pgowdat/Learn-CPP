# include<iostream>

using namespace std;

int glo = 11;

void sum(){
    int a;
    cout<<"\nthe glo value is "<<glo;
}
int main(){
//    int a = 5;
//    int b = 7;
   int glo = 10;
   glo = 100;
   int a = 5 , b = 7;
   int num1;
   cout<<"the value of a is "<<a<<"\nthe value of b is "<<b;
   cout<<"\nthe value of glo is "<<glo;
   sum();
   cout<<"\nenter the value of num1? \n";
   cin>>num1;
   cout<<"\nthe value of num1 is "<<num1;

   //to print gloabal variable within scope use ::
   cout<<"\nthe glo value is "<<::glo;
   return 0;

}
