//EX-1 : MULTIPLICATION TABLE 

//PROBLEM : MAKE A MULTIPLICATION TABLE 

//SOLUTION :
 #include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the number for multiplication table :";
    cin>>n;
    int m=1;
    int ans;
    cout<<"your multiplication table for "<<n<<" is :"<<endl;
    do {
        ans = n*m;
        cout<<n<<" * "<<m<<'='<<ans<<endl;
        m++;
    }while(m<=10);
    return 0;
}

//output :
/*
enter the number for multiplication table :6
your multiplication table for 6 is :
6 * 1=6
6 * 2=12
6 * 3=18
6 * 4=24
6 * 5=30
6 * 6=36
6 * 7=42
6 * 8=48
6 * 9=54
6 * 10=60
*/

//                                      END
