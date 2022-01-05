#include<iostream>
using namespace std;

class BaseClass{
    
    public:
        int var_base;
        void display(){
            cout << "Display base class variable " << var_base <<endl;
        }
    
};
class DerivedClass: public BaseClass{
    
    public:
        int var_derived;
        void display(){
            cout << "Display base class varible : "<< var_base <<endl;
            cout << "Display derived class varible : "<< var_derived <<endl;
        }
};
int main() {
    
    BaseClass * base_class_pointer;
    BaseClass base_obj;
    DerivedClass derived_obj;
    base_class_pointer = &derived_obj; // pointing base class pointer to derived class

    base_class_pointer->var_base = 23; 
    //base_class_pointer->var_derived = 45; // will throgh an error
    
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &derived_obj;
    derived_class_pointer->var_base = 666;
    derived_class_pointer->var_derived = 5555;
    derived_class_pointer->display();
    return 0 ;
}