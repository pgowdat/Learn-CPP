/* A function object is a function wrapped in a class so that it is available as an object.*/

#include<iostream>
#include<functional>
#include<algorithm>
 
using namespace std;
 
int main(){
 
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    sort( arr, arr+5, greater< int >( ));//sort function to sort the array in descending order

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}
