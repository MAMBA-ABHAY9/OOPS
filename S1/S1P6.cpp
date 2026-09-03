#include <iostream>
using namespace std;


int main(){

 cout<<"Enter a number :";
 
 int number;

 cin>>number;

 int newnum = 0;

 while(number!=0){

    newnum = newnum + number%10;
    
    number = number/10;

 }
 cout<<"The sum of digits of the number is : "<<newnum<<endl;


return 0; 
}