#include<iostream>
using namespace std;

// function defination to swap values
// call by reference  using c++ reference variable 
void swapReference(int &num1, int &num2) {
    int temp;
    temp = num1;
    num1 = num2;   
    num2 = temp;

}
// passing by reference using pointer
// function defination to swap numbers
// Call by reference using pointers
void swapPointer(int* n1, int* n2){

    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
} 
// these will not swap a and b
/*void swap3(int a, int* b){

    int temp;
    temp = a;
    a = b;
    b = temp;
} */
int main() {
    int a = 1, b = 2;

    cout << "Before swaping \n";
    cout << "a : "<<a<<endl;
    cout << "b : "<<b<<endl;

    swapReference(a, b);  // This will swap a and b using reference  variables

    // call function by passing variable address
    swapPointer(&a, &b); // This will swap a and b using pointer reference  
    cout << "After swaping \n";
    cout << "a : "<<a<<endl;
    cout << "b : "<<b<<endl;


    return 0 ;
}