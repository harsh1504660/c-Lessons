//CHAP - 13 : STRUCTURE ENUMS AND UNIONS ....user defined data type

#include<iostream>
using namespace std;

//STRUCTURE :
struct employee
{
    /* data */
    int eid;
    char favchar;            // can use all three variables
    float salary;
};

//UNION :
union money
{
    /* data */
    int rice;
    char car;               // can use only one variable
    float pounds;
};


int main(){
    union money m1;
    m1.rice=34;
    m1.car = 'c';
    cout<<m1.rice;             // out will be 'c' cause rice will be verwrited by car          


    struct employee harsh ;
    harsh.eid=1;
    harsh.favchar = 'h';
    harsh.salary = 12200000;
    cout<<"the value is "<<harsh.salary<<endl;
    cout<<"the value is "<<harsh.eid<<endl;
    cout<<"the value is "<<harsh.favchar<<endl;

    //ENUM :
    enum meal{breakfast,lunch,dinner};    // assign number to element of list 
    cout<<breakfast;                      //output = 0
    cout<<lunch;                          // output = 1
    cout<<dinner;                         // output =2 
    
    meal k1 = lunch;
    cout<<(k1==1);                        // otput = true

    return 0;
}