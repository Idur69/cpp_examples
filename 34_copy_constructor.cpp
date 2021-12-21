#include<iostream>
using namespace std;
class Number{
    int a;
    public:
        Number(){
            a = 7;
        };
        Number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        Number(Number &obj){  // Copy constructor
        cout << "Copy Constructor Called"<<endl;
            a = obj.a;
        }
        void show(){
            cout << "The number for this object  is : "<< a<<endl;
        }
};
int main() {
    Number n1,n2, n3(9), z2;
    n1.show();
    n2.show();
    n3.show();
    Number z1(n3); // copy constructor invoked
    z1.show(); 
    z2 = n1;  // copy constructor not invoked
    z2.show();
    Number z3 = n1; // copy constructor invoked
    z3.show();

    return 0 ;
}