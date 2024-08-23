#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*Function overloading is a feature of oops where two or more functions can 
have the same name but different parameters - polymorphism*/
int sum(int a,int b){
    cout<<"using the function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"using the function with 3 arguments"<<endl;
    return a+b+c;
}
//volume of cylinder
double volume(double r,int h){
    return (3.14 * r * r * h);
}
//volume of cuboid/rectangular 
int volume(int l,int b,int h){
    return (l*b*h);
}

//volume of cube
int volume(int a){
    return (a*a*a);
}
int main(){
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3,5 and 6 is "<<sum(3,5,6)<<endl;
    cout<<"the volume of cylinder  is "<<volume(3,6)<<endl;
    cout<<"the volume of cuboid is "<<volume(3,5,6)<<endl;
    cout<<"the volume of cube is "<<volume(3)<<endl;
    return 0;
}