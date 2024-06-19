// CHAP-22 : STATIC MEMBERS AND METHODES

#include <iostream>
using namespace std;

class employee
{
    int id;
    //STATIC DATA MEMBERS OF CLASS EMPLOYEE
    static int count;           // variable witch becomes varible of whole class whch will be same for all objects
                                // BY DRFAULT VALUE IS ZERO YOU CAN NOT CHANGE
                                 
public:
    void setdata(void)
    {
        cout << " enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << id;
        cout << " id of this employee is " << id << " this is employee number " << count << endl;
    }

    static void getcount(void){
        //cout<<id                   ......throws an error STATIC FUNCTION CAN ONLY ACSESS STATIC VARIABLES
        cout<<"the value of count is "<<count<<endl;
    }
};

int employee::count=1000; // default value is zero  , YOU CAN CHANGE VALUE HERE

//STATIC MEMBER FUNCTION
int main()
{
    employee harsh, saras, mrunmay;
    harsh.setdata();
    harsh.getdata();
    employee :: getcount();

    saras.setdata();
    saras.getdata();
    employee :: getcount();

    mrunmay.setdata();
    mrunmay.getdata();
    employee :: getcount();
    return 0;
}

//                       END
