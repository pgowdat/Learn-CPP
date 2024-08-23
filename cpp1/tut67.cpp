/*C++ Function Templates & Function Templates with Parameters*/

#include<iostream>
using namespace std;

/*
float funcAverage(int a, int b){
    float avg= (a+b)/2.0; 
    return avg;
}
float funcAverage2(int a, float b){
    float avg= (a+b)/2.0; 
    return avg;
}
int main(){
    float a;
    a = funcAverage(5,2);
    b = funcAverage2(5,2.5);
    printf("The average of these numbers is %f",a);
    return 0;
}
*/
template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main(){
    float a,b;
    a = funcAverage(5,2);
    b = funcAverage(5,2.8);
    printf("The average of a numbers is %f \n",a);
    printf("The average of b numbers is %.4f \n",b);
    swapp(a,b);
    cout<<"values of a and b are "<<a<<" & "<<b;
    return 0;
}
