//CHAP-16 : INLINE FUNCTION AND DEFAULT & CONSTANT ARGUMENTS 

#include<iostream>
using namespace std;

int product(int a,int b){
    static int c=0;               //this line exeutes only ones 
    c=c+1;                        // next timr this function wil run, the value of c will be retained .
    return a*b+c;
}

float moneyRecived(int curruntMoney,float factor=1.04){    // DEFAULT VALUE 
    return curruntMoney*factor;                            // DEFAULT ARGUMENT SHOULD BE ON EXTREAM RIGHT
}

int main(){
    int x ,y;
    cout<<"enter the value of a and b :";
    cin>>x>>y;
    cout<<"the product of a and b is"<<product(x,y)<<endl;
    int money = 10000;
    cout<<"if you have "<<money<<"rs in bankaccount,you will recive "<<moneyRecived(money)<<"rs after one year";
    cout<<"FOR VIP : if you have "<<money<<"rs in bankaccount,you will recive "<<moneyRecived(money,1.10)<<"rs after one year";

    return 0;
}

//                                     END
