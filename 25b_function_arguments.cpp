//passing object as Function argument
#include<iostream>
using namespace std;
class complex
{
int a;
int b;
public:
    void setData(int v1, int v2){
        a = v1;
        b =v2;
    }
    void setDatabySum(complex obj1, complex obj2){
        a = obj1.a + obj2.a;
        b = obj2.a + obj2.a;
    }
    void printNumber(){
        cout << "Your complex number is : "<< a <<" + "<< b <<"i" <<endl;
    }
};



int main() {
    complex c1, c2, c3;
    c1.setData(1,2);
    c1.printNumber();

    c2.setData(3,4);
    c2.printNumber();

    c3.setDatabySum(c1, c2);
    c3.printNumber();
    return 0 ;
}