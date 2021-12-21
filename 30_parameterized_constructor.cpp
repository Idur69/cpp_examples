#include<iostream>
using namespace std;

class Complex{
    int a, b;

    public:
    Complex(int x, int y); // constructor declaration
    void printNumber(){
        cout<<  "Your number is :"<< a << " + " << b << "i"<<endl;
    }

};
Complex :: Complex(int x, int y){   // -->This is parameterized constructor as it tackes two parameters
    a = x;
    b = y;

    cout <<"\n This is contructor \n";
}
int main() {
    // Implicitly call

    Complex c1(4,7);
    c1.printNumber();

    // Explicitly call
    Complex c2 = Complex(6,9);
    c2.printNumber();
    
    return 0 ;
}