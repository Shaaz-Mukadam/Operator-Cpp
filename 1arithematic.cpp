//**********************OPERATOR*************
//A operator is a symbol that operates on value to perform specific mathematical or logical computation.
// Syntax: operand operator operand;

//**********************ARITHEMATIC OPERATOR************
#include<iostream>
using namespace std;
int main() {
    int a = 10 , b = 20;

    int c = 30;
    cout<<"Operator";
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<"\n\n";

    //Post and pre increment
    cout<<"Post and pre Increment"<<endl;
    cout<<c++<<endl;
    cout<<+c<<endl;
    cout<<c--<<endl;
    cout<<--c;

    cout<<"\n\n\n";
    int i = 5 , j = 4 , k = 3;
    int m = i-- - k -- - j++;

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<m;


    cout<<"\n\n";
    int x = 40;

    --x;
    cout<<x;

}

