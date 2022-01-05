#include<iostream>
using namespace std;

class BaseClass{
    
    public:
        int varbase1 = 45;
        virtual void display(){
            cout<<"1 Base class variable called " << varbase1 <<endl;
        }
};
class DerivedClass: public BaseClass{
    public:
        int varbase2 = 66;
        void display(){
            cout << "2 Base class variable from derived class : "<< varbase1<<endl;
            cout << "2 Derived class variable  : "<< varbase2 <<endl;
        }
};
int main() {
    
    BaseClass * base_class_pointer;
    BaseClass base_obj;

    DerivedClass derived_obj;
    base_class_pointer = &derived_obj;
    base_class_pointer->display();
    
    return 0 ;
}