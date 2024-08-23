#include<iostream>
using namespace std;


class Point{
       int x,y;
       public:
          Point(int a,int b){
            x=a;
            y=b;
          }
         void dispayPoint(){
            cout<<"the point is ("<<x<<","<<y<<")"<<endl;
         } 

};

/* create a function(HINT: make it a friend function ) which takes two point objects
 and computes the distance between two points*/
 
int main(){
    Point p(1,2);
    p.dispayPoint();
    Point q(3,4);
    q.dispayPoint();

    return 0;
}