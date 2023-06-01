//****************BITWISE OPERATOR**************
//Bitwise operator is used to perform operation on bits.
//Bitwise operator are & , | , ^ , ~ , << >>

#include<iostream>
using namespace std;
int main() {
   //********Bitwise and & it gives 1 if both are 1 or else 0
   int a = 12 , b= 25 ;   //(12=00001100     25= 00011001 in binary)
   cout<<(a&b)<<endl;  // 00001000  = 8

   //bitwise or | it gives 1 if any one number if 1

   cout<<(a|b)<<endl;   //00011101  = 29

   //Bitwise ^ xor it gives 0 if both are true or else fals.
   cout<<(a^b)<<endl;   // 00010101  = 21

   //Bitwise << left shift shift the number in left direction

    //Bitwise << right shift shift the number in right direction

    //one compleemnt it do 1 to 0 and 0 to 1

}
