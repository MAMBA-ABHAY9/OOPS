//wap to reverse a number taken from user 
#include <iostream>
using namespace std;

int main (){

    cout<<"Enter a number that you want to reverse:" ;
    
    int number;

    cin>>number ;

    int reversenum =0;

    while(number!=0){
        reversenum = reversenum*10 + number%10;
        number = number/10;
    }

    cout<<"The reversed number is: "<<reversenum<<endl;






    return 0;
}