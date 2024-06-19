//CHAP-8 : IF ELSE AND CONTROL STRUCTUR 

#include<iostream>

using namespace std;

int main(){
    //SELECTION CONTROL STATEMENT --IF ELSE LADDER
    int age;
    cout<<"tell me your age ";
    cin>>age;
    if (age<18){
        cout<<"you can not come to party";
    }
    else if(age==18){
        cout<<"youe wil get kid pass";
    }
    else{
        cout<<"you can come to the party";
    }

    //SELECTION CONTROL STATEMENT --SWITCH CASE STATMENT
    switch (age)
    {
    case 18:    
        cout<<"your are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 2:
        cout<<"you are 2"<<endl;
        break;
    default:
        cout<<"no specia cases"<<endl;
        break;
    }
    return 0;
}

//                                       END
