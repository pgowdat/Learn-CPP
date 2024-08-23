#include<iostream>
using namespace std;

//destructor never takes an argument nor it does return any value .
//Destructor release memory space occupied by the objects created by the constructor

int count = 0;
class num{
    public:
    num(){
        count++;
        cout<<"this is the time when constructor is called for object number "<<count<<endl;
    }


    ~num(){
        
        cout<<"this is the time when destructor is called for object number "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are inside our main function"<<endl;
    cout<<"creating first object n1 "<<endl;
    num n1;
    // cout<<" The count is " << count<<endl;
    {
        cout<<"entering this block ";
        cout<<"creating two more objects "<<endl;
        num n2,n3;
        // cout<<" The count is " << count<<endl;
        cout<<"exiting the block "<<endl;
    }
    cout<<" back to main "<<endl;
    // cout<<" The count is " << count<<endl;
    return 0;
}