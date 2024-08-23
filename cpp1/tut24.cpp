//static data members and function 
#include<iostream>
using namespace std;

class Employee
{
    static int count;
    int id;

public:
    void setData()
    {
        
        for (int i = 0; i < 2; i++)
        {
            cout << "enter the employee id " << endl;
            cin >> id;
            count++;
            getData();
        }
    }
    void getData()
    {
      cout << "the id of emplyee is " << id << " and the employe num is " << count << endl;
        
    }
    //static function can access only static variables and function .
    static void getCount(void){
        // cout<<id; throws an error
        cout<<" the value of count is "<<count<<endl;
    }
};

// count is a static data member of class employee
// its declared with class not every objects,
// default value is 0, one time memory,shared by all objects.

int Employee :: count;

int main()
{
    Employee a;
    Employee b;
    // a.id=1; can't do it as id and
    // a.count=2;
    cout << " a type employees" << endl;
    a.setData();
    Employee::getCount();
    //a.getData();


    cout << "b type employees" << endl;
    b.setData();
    Employee::getCount();
    // b.getData();
    return 0;
}