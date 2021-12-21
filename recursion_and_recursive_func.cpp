#include<iostream>
using namespace std;

int fib(int n){
    if (n <2 ) {
        return 1;
    }
    return fib(n - 2) + fib(n-1);
}
// fibinoci flow
//fib(5) 
//fib(4) + fib(3)
//fib(2) + fib(3) + fib(2) + fib(3)
int factorial(int n){
    if(n <=1){
        return 1;
    }
    return n * factorial(n -1);
}

// step by step calculation of factorial
/*factorial(4) = 4 * factorial(3);
factorial(4) = 4 * 3 * factorial(2);
factorial(4) = 4 * 3 * 2 *factorial(1);
factorial(4) = 4 * 3 * 2 * 1;
factorial(4) = 24;
*/

int main() {
    
    //6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by defination
    // 1! = 1 by defination
    // n! = n * (n-1)
    int num;
    cout << "Enter number! :\n";
    cin>> num;
    
    //cout << "Given number"<<num<<"! factor is  :" << factorial(num)<<endl;
    cout << "Terms in fibinoci series"<<num<<" is  :" << fib(num)<<endl;

    return 0 ;
}