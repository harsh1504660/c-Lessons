//CHAP 14 : FUNCTIONS AND ITS PROTOTYPE 

#include<iostream>
using namespace std;

//FUNCTION PROTOTYPE                              ....gives assurance to that sum func will be availabe below main()
// type function-nae (argument)  
int sum(int a,int b);
void g();

int main(){
    int num1,num2;
    // num1 and num2 are actual parameter
    cout<<"enter first number "<<endl;
    cin>>num1;
    cout<<"enter second number "<<endl;
    cin>>num2;
    cout<<"the addistion of numbers is "<<sum(num1,num2);
    g();
    return 0;
}

int sum(int a,int b){
    // a and b are formal paameters
    int c = a+b;
    return c;                       //return value function key
}

void g(){                                   //void = takes no input and does not return any value
    cout<<endl<<"hello goood morning";
}

//                                        END
