//CHAP - 6 : REFRENCE VARIABES AND TYPCASTING 

#include<iostream>
using namespace std;

int c = 45;
int main(){
    int c;
    cout<<"enter a value of c";
    cin>>c;
    cout<<"value of local is "<<c<<endl;
    cout<<"value of global c is "<<::c<<endl;                  // scope resolution operator - ::

//*****REFRENCE VARIABLE*****
    float vari = 455;
    float & y = vari;                                    // & y : stores the value of vari in y 
    cout<<y<<endl;
    cout<<vari;

//****TYPE CASTING******
    float x = 45.45;
    cout<<"value of x in float "<<x<<endl;
    cout<<"value of x is (converted in int)"<<(int)x;                   // converts value of float into int and vicea versa 

    return 0;

}

//                               END
