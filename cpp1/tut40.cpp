#include <iostream>
using namespace std;
/* Multilevel inheritance */
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r){
    roll_number=r;
}
void Student ::get_roll_number(void){
    cout<<"roll num is "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);
};
void Exam::set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void Exam::get_marks(void){
    cout<<" marks scored in maths "<<maths<<endl;
    cout<<" marks scored in physics "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
    void display(){
        set_roll_number(11);
        get_roll_number();
        get_marks();
        cout<<"the percentage of student is "<<((maths+physics)/2)<<endl;
    }
};
int main()
{
    Result pavan;
    pavan.display();
    pavan.set_marks(11,12);
       return 0;
}