#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int factoriall(int n)
{
    if(n<=1){
        return 1;
    }
    return n*factoriall(n-1);
}
int fib(int n)
{
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

// factoriall(4)=4*factoriall(3);
// factoriall(4)=4*3*factoriall(2);
// factoriall(4)=4*3*2*factoriall(1);
// factoriall(4)=4*3*2*1;

int main(){
    // Factorial of a number 
    // 6!=6*5*4*3*2*1
    //0!=1 , 1!=1 by definition 
    //n! = n*(n-1)!
    int a,b;
    cout<<"enter a number "<<endl;
    cin>>a>>b;
    cout<<"the factorial of "<<a<<" is "<<factoriall(a)<<endl;
    cout<<"the term in fibonacci sequence at  "<<b<<" is "<<fib(b)<<endl;

    return 0;
}

