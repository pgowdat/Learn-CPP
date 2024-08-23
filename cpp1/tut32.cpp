/* constructor with default arguments */
#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int a=2, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void printdata();
};
void simple::printdata()
{
    cout << "the value of data1 is " << data1 << " "
         << "data2 is " << data2 << endl;
}
int main()
{
    simple s1(4, 5);
    s1.printdata();

    simple s2(4);
    s2.printdata();

    simple s3;
    s3.printdata();
    return 0;
}