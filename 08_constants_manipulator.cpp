#include <iostream>
#include <iomanip>

using namespace std;

int main (){ 
    /*
    int a = 45;
    char c = 'c';

    cout << "The value of a : " << a << endl;
    cout << "The value of c : " << c << endl;
    a = 55;
    c = '3';
    cout << "The value of a : " << a << endl;
    cout << "The value of c : " << c << endl;
    */
    // Contants in C++

    cout << "---------------Contants in C++ -------------------" << endl;
    
    const float x = 34.55;
    cout << "x is : " << x << endl;
    //x = 87.87;  // we cannot chage value of x becoz x is const
    //cout << "x new : "<< x << endl;
    cout << "---------------Manipulators in C++ -------------------" << endl;
    // we have to import iomanip library
    /*
    int a =3, b = 45, c = 1212;

    cout << "The value is a :"<<a<<endl;
    cout << "The value is b :"<<b<<endl;
    cout << "The value is c :"<<c<<endl;
    cout << "--------------------------With setw -----------------"<<endl;
    cout << "The value is a :"<<setw(4)<<a<<endl;
    cout << "The value is b :"<<setw(4)<<b<<endl;
    cout << "The value is c :"<<setw(4)<<c<<endl;
    */
   cout << "---------------Operator precedence in C++ -------------------" << endl;
    int a = 3, b=5;
    int c = (a*4)+b;
    int d = (((a*5)+b)-45)+87;
    cout << "c : "<<c << endl; 
    cout << "d : "<<d << endl; 
    

    return 0;
}