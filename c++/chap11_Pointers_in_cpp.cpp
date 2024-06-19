//CHAP -10 : POINTERS IN CPP 

#include<iostream>
using namespace std;

int main(){
    //what is pointer -----> data type which holds the addres of other data type

    int a = 3;
    int* b =&a;                            //.....pointer variable

    // & -----> address of operator
    cout<<"address of a"<<b<<endl;        // gives address of variable

    // * -----> (value at operator) derefrencer opertor
    cout<<"value at b"<<*b<<endl;               // gives the value of variable by its address

    int** c = &b;
    cout<<"c stores address of b"<<c;     // this is pointer to pointer variable (stores address of pointer variable)
    return 0;
}

//                           END
