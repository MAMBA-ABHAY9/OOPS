#include <iostream>
using namespace std;
//code for prime number
int main() {

    int a;
    cout <<"Enter a number";

    cin >> a;

    for(int i=2; i*i<=a; i++){
    
        if(a%i==0){
            cout <<"Not a prime number";
        }
    
    cout <<"Prime number";
            
    }

 return 0 ;   
}