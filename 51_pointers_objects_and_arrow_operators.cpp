// pointers objects and arrow operators

#include<iostream>
using namespace std;
class Complex
{
    int real, imaginary;
    public:
        void getData(void){
            cout << "The value of real : " << real <<endl;
            cout << "The value of imaginary : "<< imaginary<< "i" <<endl;
        }
        void setData(int r, int i){
            real = r;
            imaginary = i;
        }
};

int main() {
    Complex c1;
    //c1.setData(12,23);
    //c1.getData();

    //Complex *ptr = &c1; // or
    Complex *ptr = new Complex;
    //(*ptr).setData(23,56); // is exactly same as
    ptr->setData(45,89);  // -> is used to dereference

    // (*ptr).getData();  // is exactly same as
    ptr->getData();


    // Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(34,57);
    ptr1->getData();
    
    return 0 ;
}