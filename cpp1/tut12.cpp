#include<iostream>

using namespace std;

int main()
{

    int a = 3;
    int* b ;
    b = &a;

    /*what is pointer ? --------> the data type which holds the address of the other data types*/
    cout<<"The address of a is b i.e  "<<b<<endl;

    // & -----> (adress of) operator 
    cout<<"The address of a is &a i.e  "<<&a<<endl;
    cout<<"The address of b is &b i.e  "<<&b<<endl;

    // * -------> ( value at that address )dereference operator 
    cout<<"The value at address b is *b i.e "<<*b<<endl;

    //pointer to pointer 
    int**c = &b;
    cout<<"\nthe address of b is  "<<&b<<endl;
    cout<<"the address of b is  "<<c<<endl;
    cout<<"the address of c is  "<<&c<<endl;
    cout<<"the value at address c is  "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is  "<<**c<<endl;
    return 0;
}    

