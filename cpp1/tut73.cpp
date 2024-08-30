/*MAPS*/

#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main(){
 
    // Map is an associative array
    map<string, int>  marksMap;
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;
    marksMap.insert( { {"Rohan", 89}, {"Akshat", 46} } );
 
   //Maps always sort these pairs by the key elements
    map<string,int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        // cout<<(*iter).first<<" "<<(*iter).second<<"\n";
        cout<<iter->first<<" "<<iter->second<<"\n";
    }
    
    cout<<"The size is : "<<marksMap.size();
    return 0;
}

