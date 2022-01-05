#include<iostream>
using namespace std;

// Syntax

/*
CALASS TEMPLATES WITH MULITPLE PARMATERS (ONE, TWO OR MORE THAN TWO)
template<class T1, class T2....(COMMA SEPERATED)>
class nameofclass{
    // body
}
*/


template <class T1, class T2>

class myClass{

    public:
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<"mydata : "<< this->data1 << " , "<< this->data2<< endl;
        }
};
int main() {
    myClass <char, float> obj('S', 3.44);
    obj.display();
    return 0 ;
}