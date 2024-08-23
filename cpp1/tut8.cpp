#include<iostream>
#include <iomanip>

using namespace std;

int main(){
    const int a = 11;
    cout<<"the value of a was "<<a<<endl;
    //a = 12;
    cout<<"the value of a is: "<<setw(4)<<a<<endl;
    return 0;
}