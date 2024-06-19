//CHAP-12 : ARRAYS AND POINTER ARITHMATIC

#include<iostream>
using namespace std;

int main(){
    int marks[4] = {23,45,56,89};                      // making of array
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;

    marks[2]= 55;
    cout<<marks[2];

    //priting array using for loop
    for (int i = 0; i < 4; i++)                       
    {
        cout<<"the value of marks using for loop"<<i<<" is "<<marks[i]<<endl;
    }

    //priting array using whie loop
    int i=0;
    while (i<4){
            cout<<"the value of marks using while loop "<<i<<" is "<<marks[i]<<endl;
            i++;
    }

    //priting array using do while loop
    int j=0;
    do
    {
        cout<<"the value of marks using do while loop "<<j<<" is "<<marks[j]<<endl;
        j++;
    } while (j<4);
    
    //*POINTER ARITHMATIC*//
    // new adress = adress currunt + i * size of data type ...
    int* p=marks;
    cout<<"the value of marks[0] is "<<*p;
    cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is "<<*(p+3)<<endl;
    
    return 0;
}

//                                 END

