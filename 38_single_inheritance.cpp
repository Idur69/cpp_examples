#include<iostream>
using namespace std;
class Base{
    int data1; // by default private data variable is not inheritable
    public:
        int data2;  // public data 
        void setData();
        int getData1();
        int getData2();
};
void Base :: setData(){
    data1 = 10;
    data2 = 20;
}
int Base :: getData1(){
    return data1;
}
int Base :: getData2(){
    return data2;
}

class Derived : public Base {
    int data3;
    public:
        void process();
        void display(){
            cout<< "data1 : "<< getData1()<<endl;
            cout<< "data2 : "<< data2<<endl;
            cout<< "data3 : "<< data3<<endl;
        }

};

void Derived :: process(){
    data3 = data2 * getData1();
}

int main() {

    Derived d1;
    d1.setData();
    d1.process();
    d1.display();
    
    return 0 ;
}

