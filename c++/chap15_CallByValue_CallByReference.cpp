//CHAP - 15 : CALL BY VALUE AND CALL BY REFERENCE 

#include<iostream>
using namespace std;

//this will not swap values :******
// void swap(int a,int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

//CALL BY REFERENCE USING POINTERS
void SwapPointer(int* a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//CALL BY REFERENCE USING C++ REFRENCE VARIABLES
void SwapRefrenceVar(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x=4,y=5;
    cout<<"the value before swapping "<<x<<" "<<y<<endl;
    //swap(x,y);   THIS WILL NOT WORK
    SwapPointer(&x,&y); // BY POINTER VARIABLE METHODE
    cout<<"the value after swapping BY POINTER VARIABLE "<<x<<" "<<y<<endl;
    SwapRefrenceVar(x,y);
    cout<<"the value after sappping by refrence variable methode "<<x<<" "<<y<<endl;

    return 0;
}

//                          END
