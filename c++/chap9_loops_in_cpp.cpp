//CHAP - 9 :FOR WHILE DO-WHILE LOOPS 

#include<iostream>

using namespace std;

int main(){
    /*THER ARE 3 TYPES OF LOOPS IN CPP:
    1. WHLE LOOP
    2. FOR LOOP
    3.DO WHILE LOOP*/

    //FOR LOOP :
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
        
    }

    //WHLE LOOP :
    int j=10;
    while (j<=4)
    {
        cout<<j<<endl;
        j++;
    }
    
    //DO WHILE LOOP:
    int k=1;
    do{
        cout<<k<<endl;
        k++;
    }while(k<=40);
    return 0;

}

//                          END
