//#CHAP-10 : BREAK CONTINUE STATEMENTS  

#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<4; i++)
    {
        cout<<i<<endl;
        if (i==2){
            break;                          //exit the loop
        }
    }
    for (int j = 0; j < 30; j++)
    {
        if (j==10){
            continue;                       // skip the below code for perticuar iteration
        }
        cout<<j<<endl;
    }
    return 0;
}

//                                END
