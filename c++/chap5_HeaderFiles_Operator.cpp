//CHAP - 5 : HEADER FILES AND OPERATOR 

//there are two types of header files
//1. System header files: it comes with the compiler
#include<iostream>

//2. User defined header files : it is written by the programmer
//#include "chap1_helloworld.cpp"          

using namespace std;
int main()
{
    cout<<"this is hello world prgram";
   


//operators in cpp
    int a=4,b=9;
    cout<<"operatores in c++ :\n";
    cout<<"following are types of operator :\n";

    //arithmatic operator
    cout<<"the value of a + b is "<<a+b<<"\n";
    cout<<"the value of a - b is "<<a-b<<'\n';
    cout<<"the value of a * b is "<<a*b<<endl;
    cout<<"the value of a / b is "<<a/b<<endl;
    cout<<"the value of a % b is "<<a%b<<endl;
    cout<<"the value of a -- is "<<--a<<endl;
    cout<<"the value of a + b is "<<++a<<endl;

    //Assignment Operators
    // int c=3,d=9;
    // char d='d';

    //Compler operators
    cout<<endl;
    cout<<"comparison operators :\n";
    cout<<"the value of a < b is "<<(a<b)<<endl;
    cout<<"the value of a = b is "<<(a==b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    cout<<"the value of a > b is "<<(a>b)<<endl;

    //Logical operator
    cout<<"the is ogical AND operator is "<<((a==b) && (a<b))<<endl;         // AND OPERATOR
    cout<<"the is logical OR operator is "<<((a==b) || (a<b))<<endl;         // OR OPERTOR
    cout<<"the NOT operator is "<<(!(a==b))<<endl;                           // NOT OPERATOR

    return 0;
}
 //                               END
 