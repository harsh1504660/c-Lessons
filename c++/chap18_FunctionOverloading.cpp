//CHAP-17 : FUNCTION OVERLOADING                [ONE FUNCTION CAN BE USED FOR MULTIPLE PURPOSES] 

#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}

//volume of cube
int volume(int a){
    return (a*a*a);
}

//volume of cylider
int volume(int r,int h){                      
    return (3.14*r*r*h);
}

//volume of rectangular box
int volume(int l,int b,int h){
    return (l*b*h);
}
int main(){
    cout<<"sum of 5 and 7 is "<<add(5,7)<<endl;
    cout<<"sum of 5,7,5 is "<<add(5,7,5)<<endl;
    cout<<"volume of cube with 5 is "<<volume(5)<<endl;
    cout<<"volume of cylider with radius 2 and hight 5 is "<<volume(2,5)<<endl;
    cout<<"volume of rectangular box with 5 6 7 is "<<volume(5,6,7)<<endl;
    return 0;
}

//                             END
