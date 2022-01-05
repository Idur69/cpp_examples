#include<iostream>
using namespace std;
class Base{
    protected:
        int a;
    private:
        int b;

};
/*
For protected members
                    Public derivation   Private derivation  Protected derivation
1.Private members   Not inherited       Not inherited       Not inherited
2.Protected members Protected           Private             Protected
3.Public members    Public              Private             Protected
*/
class Derived: protected Base{

};
int main() {
    Base b;
    Derived d;
    //cout << b.a; // Will not work since a is protected in both base as well as derived class
    return 0 ;
}