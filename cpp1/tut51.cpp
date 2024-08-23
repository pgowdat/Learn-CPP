//POINTER TO OBJECTS AND ARRAY OPERATOR 

// #include<iostream>
// using namespace std;

// class Complex{
//     int real, imaginary;
//     public:
//         void getData(){
//             cout<<"The real part is "<< real<<endl;
//             cout<<"The imaginary part is "<< imaginary<<endl;
//         }

//         void setData(int a, int b){
//             real = a;
//             imaginary = b;
//         }

// };
// int main(){
//     //Complex c1;
//     //Complex *ptr=&c1;
//     Complex *ptr = new Complex;
//     (*ptr).setData(1, 54); //is exactly same as ptr->setData(1, 54);
    
//     (*ptr).getData(); //is as good as ptr->getData();

//     return 0;
// }

#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex;
    ptr->setData(1, 54);
    ptr->getData(); 

    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(1, 5); 
    ptr1->getData();
    ptr++;

    ptr1->setData(2, 7); 
    ptr1->getData();
    ptr++;
    return 0;
}
