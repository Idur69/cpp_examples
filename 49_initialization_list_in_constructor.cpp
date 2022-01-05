#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor

constructor (argument-list) : initialization-section
{
    assignment + othercode
}
*/
class Test{
    int a, b;
    public:
        //Test(int i, int j): a(i), b(j){
        //Test(int i, int j): a(i), b(i+j){
        //Test(int i, int j): a(i), b(2 * j){
        //Test(int i, int j): a(i), b(a + j){
        //Test(int i, int j): b(j), a(i + b){ // Reg FLAG this will crate problem because of a will be initialized first
        Test(int i, int j): b(j), a(i + b){  // for this b declared first and then a declared
            cout << "Test class Constructor executed "<<endl;
            cout << "The value of a is : "<< a <<endl;
            cout << "The value of b is : "<< b <<endl;

        }
};

int main() {
    Test t(2,4);

    return 0 ;
}