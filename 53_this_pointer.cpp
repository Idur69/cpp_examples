#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
        //A & setData(int a){
            this->a = a;
            //return *this;
        
        }
        void getData(void){
            cout << "The vlaue of a : "<< a <<endl;
        }
};
int main() {
    // this is keyword which is a pointer which points the object which invoke the member function

    A a;
    a.setData(8);
    a.getData();

    return 0 ;
}