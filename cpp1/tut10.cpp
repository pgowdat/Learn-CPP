#include<iostream>

using namespace std;

int main(){
    /*LOOPS in c++:
    there are three types of loops in c++:
    1)for loop
    2)while loop
    3)do while loop
    */

   /* for loop in cpp*/
//    int i=1;
//    i++;
//    cout<<i<<endl;
//    i++;
//    cout<<i<<endl;


/* syntax for for-loop
for(initialization;condition;updation)
{
    loop_bod();
}
*/

// for (int i = 0; i < 11; ++i)
// {
//     cout<<i<<endl;
//     ++i;
// }

/* while loopin c++*/
// while(condition)
// {
//   c++ statements;
// }

// int i=1;
// while(i<10)
// {
//     cout<<i<<endl;
//     i++;
// }
// }

/* do while loop in c++*/
// do
// {
//     /* code */
// } while ({/* condition */});

//printing 1 to 40 using while loop

int i=1;
do{
    cout<<i<<endl;
    i++;
}while(i<10);

return 0;

}
//condition false or true it will run for atleast  1 time