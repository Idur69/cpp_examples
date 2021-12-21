#include<iostream>
using namespace std;
class Complex{
    private:
        int a, b;
    public:
        Complex(){
            a = 0;
            b = 3;
        }
        Complex(int x){
            a = x;
            b = 0;
        }
        Complex(int x, int y){
            a = x;
            b = y;
        }
        void printNumber(){
        cout<<  "Your number is :"<< a << " + " << b << "i"<<endl;
        }
};
int main() {
    Complex c1;
    c1.printNumber();
    Complex c2(7);
    c2.printNumber();
    Complex c3(4, 6);
    c3.printNumber();
    return 0 ;
}