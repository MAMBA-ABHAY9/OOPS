#include <iostream>
using namespace std;

cout<<"Enter a number :" ;

int n;

cin>>n;

int fibonacci(n);

if(n==0){
    
return 0;
}
else if(n==1){
return 1;
}

else{

    return fibonacci(n-1)  + fibonacci(n-2);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "The Fibonacci value is: " << fibonacci(n) << endl;

    return 0;







return 0;
}
