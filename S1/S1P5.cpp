#include <iostream>
using namespace std;

int main() {

cout<<"Enter a number :" ;

int number;

cin>>number ;

int newnum = number;

int reversenum = 0;

while(number!=0){

    reversenum = reversenum*10 + number%10;

    number = number/10;

}
if(reversenum == newnum){

    cout<<"the number is palindrome"<<endl;

}

    cout<<"the number is not palindrome"<<endl;





    return 0;
}