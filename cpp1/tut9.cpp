#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"\nEnter your age: ";
    cin>>age;

    //*********** selection control structure : if else ladder *******

    // if(age<18){
    //     cout<<"\nYOU ARE NOT ALLOWED TO PARTY , kid grow up";
    // }
    // else if(age==18){
    //     cout<<"\n you are allowed but need to buy kid pass";
    // }
    // else {
    //     cout<<"free entry , you are adult !!!!!! ";
    // }
    

    //*********** selection control structure : switch case statements *******

    switch (age)
    {
    case 18:
        cout<<"YOR ARE 18 !"<<endl;
        break;
    case 11:
        cout<<"YOR ARE 11 !"<<endl;
        break;
    case 15:
        cout<<"YOR ARE 15 !"<<endl;
        break;
    case 07:
        cout<<"YOR ARE 07 !"<<endl;
        //break;        
    default:
        cout<<"your age cant be  disclosed ";
        break;
    }

    return 0;
}