//CHAP-17 : RECURSION AND RECUESIVE FUNCTION 

#include<iostream>
using namespace std;


int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int fib(int m){                               // fibonaccie
    if (m<2){
        return 1;
    }
    return fib(m-2)+fib(m-1);
}
int main(){
    //factorial of a number
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<"the factorial of n is "<<factorial(n)<<endl;
    cout<<"the fibonaci series for n is "<<fib(n)<<endl;
    return 0;
}
//                         END
