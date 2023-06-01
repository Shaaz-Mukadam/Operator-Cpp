//*************LOGICAL OPERATOR**************
//Logical operator is used to to conncet multiple expression together;

//Write a program to check the number is divisble by 2 and 3 both or only 2 or only 3
#include<iostream>
using namespace std;
int main() {
 int n;
 cin>>n;

 if(n%2==0 && n%3==0) {
    cout<<"Entered number is divisible by both"<<endl;
 }
 else if(n%2==0){
    cout<<"Entered number is divisible by 2"<<endl;
 }
 else if(n%3==0){
    cout<<"Entered number is divisble by 3"<<endl;
 }
 else{
    cout<<"Divisible by none";
 }
}
