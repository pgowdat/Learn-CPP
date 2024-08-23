// object memory allocation and usin arrays
#include <iostream>
#include <string>

using namespace std;

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice()
{
    for(counter;counter<2;counter++){
    cout << "Enter ID of your item no" << counter+1 << endl;
    cin >> itemID[counter];
    cout << "Enter price of your item no" << counter+1 << endl;
    cin >> itemPrice[counter];
    }
    // counter++;
}

void Shop ::displayPrice()
{ 
    cout<<endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of the item ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    Shop angadi;
    cout<<"details of dukaan"<<endl;
    dukaan.initCounter(); //this function help in setting counter value=0 for each object.
    dukaan.setPrice();
    dukaan.displayPrice();
    // dukaan.setPrice();
    // dukaan.setPrice();
    cout<<"details of angadi "<<endl;
    angadi.initCounter();
    angadi.setPrice();
    // angadi.setPrice();
    // angadi.setPrice();
    angadi.displayPrice();

    return 0;
}