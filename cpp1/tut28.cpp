#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
      void setvalue(int value){
        data=value;
      }
      friend void add(X,Y);
};
class Y{
    int num;
    public:
      void setvalue(int value){
        num=value;
      }
      friend void add(X,Y);
};

void add(X ox1,Y oy1 ){
    cout<<"summing data of X and Y objects gives me "<<(ox1.data+oy1.num)<<endl;
}
int main(){
    X a1;
    Y b1;
    a1.setvalue(5);
    b1.setvalue(8);
    add(a1,b1);

    return 0;
}