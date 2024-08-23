/* OOPS - class and objects 
       C++ - initially called  c with class 
       class - extension of structures (in C)
       structures had limitations: 
                 1)members are public .
                 2) no methods
        classes = structures + more 
        classes -----> can have methods and properties
        classes -----> few members can be made public and few can be made private .
        structures in c++ are typedefed 
        classes -----> you can declare objects along with class declaration. 
             class Employee{
                 // class definition 
             } pavan,revanth,sathvik; 
        pavan.salary = 1L;  makes no sense if salary is private. */

#include<iostream>
#include<string>
using namespace std;

class binary
{
private:
    string s;
    void check_binary(void);

public:
    void read(void);
    void ones(void);
    void display(void);
};

void binary :: read()
{
cout<<"enter a binary num "<<endl;
cin>>s;
check_binary();
}

void binary ::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format " << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    check_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else 
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main(){
        // nesting of member functions   
    binary b;
    b.read();
    // b.check_binary(); 
    // ---> private function , cant call directly from outside , should be called via other public function.
    b.display();
    b.ones();
    b.display();

    return 0;
    
}