/*suppose we want to have a vector for each of the three(can be more) data types, int,
float and char. Then we’ll obviously write the whole thing again and again making it
awfully difficult. This is where the saviour comes, the templates. 
It helps parametrizing the data type and declaring it once in the source code suffice.*/

#include <iostream>
using namespace std;
 
template <class T>
class vector {
    T *arr;
    int size;
    public:
        vector(T* arr)[
            //code
        ]
        //and many other methods
    
};
 
int main() {
    vector<int> myVec1();
    vector<float> myVec2();
    return 0;
}
