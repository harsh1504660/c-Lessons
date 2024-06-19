//EX-2 : CALCULATOR 

#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"enter your first number :"<<endl;
    cin>>n1;
    cout<<"enter your second number :"<<endl;
    cin>>n2;
    char opr;
    cout<<"choose your operator : "<<endl<<"press + for addition"<<endl<<"press - for subtraction"<<endl<<"press * for multiplication"<<endl<<"press / for dividation"<<endl;
    cin>>opr;
    switch (opr)
    {
    case '+':
        int sum;
        sum = n1+n2;
        cout<<"addition of your numbers is : "<<sum; 
        break;
    case '-':
        int sub;
        sub = n1-n2;
        cout<<"subtraction of your numbers is : "<<sub;
        break;
    case '*':
        int multi;
        multi = n1*n2;
        cout<<"multiplication of your numbers is : "<<multi;
        break;
    case '/':
        int divi;
        divi = n1 / n2;
        cout<<"division of your numbers is : "<<divi;
        break;
    default:
        cout<<"enterd operator is wrong!! please select valid operator";
        break;
    }
    return 0;
}

//OUTPUT :
/*
enter your first number :
20
enter your second number :
25
choose your operator :
press + for addition
press - for subtraction
press * for multiplication
press / for dividation
*
multiplication of your numbers is : 500
*/