//CHAP-19 : OBJECT ORIENTED PROGRAMMING IN C++ (classes,private,public)

#include<iostream>
using namespace std;


class employee
{
    private :
        int a,b,c;
    public :
        int d,e;
        void setdata(int a1,int b1,int c1);                // declaration
        void getdata(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<e<<endl;
            cout<<"the value of e is "<<d<<endl;
        }
            
};

void employee :: setdata(int a1,int b1,int c1){
        a=a1;
        b=b1;
        c=c1;
}

int main(){
    employee harsh;
    harsh.d = 34;
    harsh.e = 134;
    harsh.setdata(1,2,4);
    harsh.getdata();
    return 0;
}

//                                          END
