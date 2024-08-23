/*VECTORS*/


#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
    
    vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4); //4-element character vector
    vec2.push_back('5'); 
    display(vec2);
    vector<char> vec3(vec2);//4-element character vector from vec2
    display(vec3);
    vector<int> vec4(6,3); //6-element vector of 3s
    display(vec4);
    cout<<vec4.size()<<"\n";
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    //vec1.pop_back();
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+2,3,3566);
    display(vec1);   
    return 0;
}
