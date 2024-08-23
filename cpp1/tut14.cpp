#include<iostream>
using namespace std;

/*Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

Unlike an array, a structure can contain many different data types (int, string, bool, etc.).*/


// typedef <current_name>=struct employee <new_name>=EP (total memory = 9)
typedef struct employee{
    /*   data  */
    int eID; //4
    char favChar; //1
    float salary; //4
}EP;


/*n C++, a union is a user-defined datatype in which we can define members of different types 
of data types just like structures. But one thing that makes it different from structures is
 that the member variables in a union share the same memory location, 
 unlike a structure that allocates memory separately for each member variable. 
 The size of the union is equal to the size of the largest data type
 
We can only use 1 variable at a time otherwise the compiler will give us a garbage value
The compiler chooses the data type which has maximum memory for the allocation.*/

union money{
    /*   data  */
    int rice; //4
    char car; //1
    float pounds; //4
};
//memory allocated is 4 

int main(){
    
    /*The enum keyword is used to declare enumerated types after that enumerated type name 
    was written then under curly brackets possible values are defined to avoid confusion
    
    Enums are user-defined types which consist of named constants. 
    Enums are used to make the program more readable*/

    enum meal{breakfast,lunch,dinner};
    meal n1 = lunch;
    cout<<n1<<endl;


    EP PAVAN;
    struct employee GOWDA;
    union money m1;

    m1.rice = 32;
    m1.car = 'A';
    m1.pounds = 11.1;
    cout<<"the value of rice "<<m1.rice<<endl;
    cout<<"the adress of rice "<<&m1.rice<<endl; 
    cout<<"the value of car "<<m1.car<<endl;
    cout<<"the adress of car "<<&m1.car<<endl;
    cout<<"the value of pounds "<<m1.pounds<<endl;
    cout<<"the adress of pounds "<<&m1.pounds<<endl;

    PAVAN.eID = 11;
    PAVAN.favChar = 'T';
    PAVAN.salary = 96800;
    cout<<"EMPLOYEE ID "<<PAVAN.eID<<endl;
    cout<<"favourite character "<<PAVAN.favChar<<endl;
    cout<<"salary "<<PAVAN.salary<<endl;
    
    return 0;
}



// // C++ Program to Demonstrate the Functioning of Enumerators 
// // with an example of Gender 
// #include <bits/stdc++.h> 
// using namespace std; 

// int main() 
// { 
// 	// Defining enum Gender 
// 	enum Gender { Male, Female }; 

// 	// Creating Gender type variable 
// 	Gender gender = Male; 

// 	switch (gender) { 
// 	case Male: 
// 		cout << "Gender is Male"; 
// 		break; 
// 	case Female: 
// 		cout << "Gender is Female"; 
// 		break; 
// 	default: 
// 		cout << "Value can be Male or Female"; 
// 	} 
// 	return 0; 
// }
