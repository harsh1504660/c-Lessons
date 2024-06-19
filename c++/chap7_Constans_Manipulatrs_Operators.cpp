//CHA - 7 : CONSTANTS MANIPLATORS AND OPRATOR PROCEDURES 

#include<iostream>
#include<iomanip>                          // USE FOR SETW

using namespace std;

int main(){
    int b=5;
    b=4555;                     //you can cgange the vaue of variable like ths
    //constants in cpp
    const int a = 3;
    //a = 45                    ......error--- you can not change const variable

    // MANIPULATORS in cpp
    int x=3 ,y=25 , z=8855;
    cout<<"this is value of x withut setw "<<x<<endl;
    cout<<"this is value of y withut setw "<<y<<endl;
    cout<<"this is value of z withut setw "<<z<<endl;

    cout<<"this is value of x withut setw "<<setw(4)<<x<<endl;       // run the code to understand :)
    cout<<"this is value of y withut setw "<<setw(4)<<y<<endl;
    cout<<"this is value of z withut setw "<<setw(4)<<z<<endl;

    //OPERATOR PRECEDENCE
    int p=3,q=4;
    int r = p*5+q;
    cout<<"the value of r "<<r;

    return 0;
}

//                         END
