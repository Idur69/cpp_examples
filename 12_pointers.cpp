#include<iostream>
using namespace std;

int main() {

    // what is pointer?
    // pointer is datatype which hold the address of other data types 
    int a = 3;
    int* b;
    b = &a;

    // & --> Address of operator
    // * --> Deference operator
    cout << "address of a : " << &a << endl;
    cout << "address of b from a : " << b << endl;

    // value at deference operator
    cout << "value at address b : " << *b << endl;  

    // pointer to pointer
    // if you want to change vlaue of a 
    //*b = 18;
    int** c = &b;
    cout << "----------Pointer to pointer ---------\n";
    cout << "address of b        : " << &b << endl;
    cout << "address of c from b : " << c << endl;
    cout << "value at address c  : " << *c << endl;
    cout << "value at address_value_at(value_at(c)) : " << **c << endl;


    return 0 ;
}