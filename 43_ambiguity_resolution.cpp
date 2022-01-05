#include<iostream>
using namespace std;
class Baes1{
    public:
        void greet(){
            cout << "Howr are you? \n";
        }

};
class Baes2{
    public:
        void greet(){
            cout << "Kaise ho! \n";
        }

};
class Derived: public Baes1, public Baes2{
    int a;
    public:
        void greet(){
            cout<< "I AM GOOD TO SEE \n";
            Baes2 ::greet();
        }
};
// Ambiguity 2

class B{
    public:
        void say(){
            cout<< "Good morining!\n";
        }
};
class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
        void say(){
            cout<<"How beatifull my people.\n";
        }
};
int main() {
    // Abiguity 1
    /*Baes1 base1obj;
    Baes2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();*/
    // Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();
    
    return 0 ;
}