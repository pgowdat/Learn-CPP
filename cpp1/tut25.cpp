//array of objects and passing objects in function arguements
#include<iostream>
using namespace std;

class Employee
{
    int salary;
    int id;

public:
    void setData()
    {
            salary = 111;
            cout << "enter the employee id " << endl;
            cin >> id;
         
      
    }
    void getData()
    {
      cout << "the id of emplyee is " << id <<" and salary is "<<salary<<endl;
        
    }
};

int main(){
    Employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setData();
        fb[i].getData(); 
    }
}
