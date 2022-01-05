#include<iostream>
using namespace std;
/*
case 1:
class B: public A {
    // order of execution of constructor-> first A() then B()
}
case 2:
class A: public B, public C() {
    // order of execution of constructor --> first B() then C() and A()
}

case 3:
class A: public B, virtual public C {
    // order of exection of constructor --> C() then B() and A()
}

*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class Constructor called \n";
        }
        void printDataB1(void){
            cout << "The value of data1 is : "<< data1 <<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class Constructor called \n";
        }
        void printDataB2(void){
            cout << "The value of data2 is : "<< data2 <<endl;
        }
};
class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout << "Derived constructor called !"<<endl;
        }
        void printDataD1(void){
            cout << "The vlaue of derived1 and derived2 is : "<< derived1 
            << " and " << derived2 <<endl;
        }
};
int main() {
    Derived harry(1,2,3,4);
    
    harry.printDataB2();
    harry.printDataB1();
    harry.printDataD1();
    
    return 0 ;
}