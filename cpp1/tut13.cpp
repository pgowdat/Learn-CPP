#include<iostream>
using namespace std;

/* ARRAY is a datastructure that is used to store multiple data of same datatypes
 in contagious memory allocaton*/

int main(){
    int marks[4]={11,12,13,14};
    // for(int i=0;i<4;i++){
    //     cout<<marks[i]<<endl;
    // }

/* c++ pointers and arrays 
marks---->address of first block
&marks ----->wrong!
int* p=marks
*(p)----->11
*(p+1)---> 12
*/ 

    int* p=marks;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;


    cout<<"The address of marks[0] is "<<p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;


/* Pointer arithmetic
address_new = address_current + i *(size of data type)

*/

    return 0;
}