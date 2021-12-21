#include<iostream>
using namespace std;
class Complex{
    int a, b;

    public:
    // Creating constructor
    //0. Constructor is special member function with same name as of the class
    //1. constructor is used to initialize the object of its class.
    //2. It is automatically invoked whenever object created.
  
    Complex(void); // constructor declaration
    void printNumber(){
        cout<<  "Your number is :"<< a << " + " << b << "i"<<endl;
    }

};
Complex :: Complex(void){   // -->This is default constructor as it takes no parameters
    a = 10;
    b = 13;

    cout <<"\n This is contructor \n";
}
int main() {
    Complex c1;
    c1.printNumber();
    c1.printNumber();
    return 0 ;
}

/*
characterstics of constructors
1. It should declare in the public section of the class
2. They are automatically whenever object is created
3. They cannot return values and do not have return types
4. It can have default parameters
5. we cannot refer to their address

*/