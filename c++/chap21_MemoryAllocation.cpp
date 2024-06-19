// CHAP 21 - MEMORY ALLOCATION USING ARRAY :
#include <iostream>
using namespace std;

class shop
{
    int itemsID[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; };
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "enter id of your item no " << counter + 1 << endl;
    cin >> itemsID[counter];
    cout << "enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
};

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemsID[i] << "is" << itemPrice[i] << endl;
    }
};
int main()
{
    shop dukan;
    dukan.initcounter();
    int n;
    cout<<"how many items do you want to add";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        dukan.setprice();
    }
    
    dukan.displayprice();
    return 0;
}

//                            END