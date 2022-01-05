#include<iostream>
using namespace std;

// Function Prototype
// type function-name (arguments)
//int sum(int a, int b); // Acceptable;
//int sum(int a, b);  // Not Acceptable;
int sum(int , int );  // Acceptable;
void greet(); // acceptable;
void greet(void);
int main() {
    int num1, num2;
    string name;
    cout<<"Enter name : \n";
    cin>> name;
    cout<< "Enter first number : \n";
    cin>> num1;
    cout<< "Enter second number : \n";
    cin>> num2;
    //total = sum(num1, num2);
    //cout<< "Your name is :"<< name <<endl;
    //cout<<"Total is : "<< sum(num1, num2);
    // num1 and num2 are acutal parameters;
    cout<< "Your name is :"<< name << "\n Total is : " << sum(num1, num2)<<endl;
    greet();
    return 0 ;
}
int sum(int a, int b) {
    // Formal parameters a and b  will be taking values from actual parameters num1 and num2;
    int c = a + b;
    return c;
}
void greet() {
    cout << "\n Hello, Good Morning! \n";
}