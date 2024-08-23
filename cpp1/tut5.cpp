# include<iostream>
// #include "this.h" ---> this will produce an error if header file is not in current directory,

using namespace std;


int main() {
  int a=4 ,b=3;
  cout << "operators in cpp: "<<endl;
  cout << "following are operators in cpp: "<<endl;
  // Arithmetic operators 
  cout<<"the value of a+b is "<<a+b<<endl;
  cout<<"the value of a-b is "<<a-b<<endl;
  cout<<"the value of a*b is "<<a*b<<endl;
  cout<<"the value of a/b is "<<a/b<<endl;
  cout<<"the value of a%b is "<<a%b<<endl;

  /*a = 4;
b = a++; -----> first b will be 4, and after this a will be 5
####### now a value is 5 #########
c = ++a; ------> first a will be 6, then 6 will be assigned to c*/
  cout<<"the value of a++ is "<<a++<<endl; 
  cout<<"the value of a-- is "<<a--<<endl;
  cout<<"the value of ++a is "<<++a<<endl;
  cout<<"the value of --a is "<<--a<<endl;


//assignment operators---> use to assign values to variables 
//int a=3,b=9;
//char d='d';



//comparision operators

cout<<"the value of a==b is "<<(a==b)<<endl;
cout<<"the value of a!=b is "<<(a!=b)<<endl;
cout<<"the value of a>b is "<<(a>b)<<endl;
cout<<"the value of a<b is "<<(a<b)<<endl;
cout<<"the value of a>=b is "<<(a>=b)<<endl;
cout<<"the value of a<=b is "<<(a<=b)<<endl;



//logical operators

cout<<"this is example of logical operators"<<endl;
cout<<"logical operation value of (a==b) && (a>b) is  "<<((a==b) && (a>b))<<endl;
cout<<"logical operation value of (a!=b) && (a>b) is  "<<((a!=b) && (a>b))<<endl;
cout<<"logical operation value of (a!=b) && (a<b) is  "<<((a!=b) && (a<b))<<endl;
cout<<"logical operation value of (a!=b) || (a<b) is  "<<((a!=b) || (a<b))<<endl;
cout<<"logical operation value of (a==b) || (a>b) is  "<<((a==b) || (a<b))<<endl;
 return 0;
}




