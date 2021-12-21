#include<iostream>

using namespace std;
// 1 + 4i;
// 5 + 8i;
//----------
//  6 + 12i

class Complex{
    int a;
    int b;

    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        // Below line means that not member - sumComplex function is allowed to do anything with private parts (members)
        friend Complex sumComplex(Complex n1, Complex n2);
        void printNumber(){
            cout << "Your number is :" << a << " + "<< b <<"i"<<endl;
        }

};
// If we need to acces private data of class 
// from outsite function we have to use friend function
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((
         + o2.a), (o1.b + o2.b));
    return o3;
}
int main() {
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();
    

    c2.setNumber(5,8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    
    return 0 ;
}

/*
// Properties of friend class
1. Not in the scope of class
2. since not in the scope of the class, it cannot be called from the object of the class
ex : c1.sumComplex() ==> invalid
3. can be invoked without the help of any object
4. Usually contains the objects as arguments
ex: Complex o1, Complex o2
5. can be declared inside public or private section of the class
    ex: private:
            friend Complex sumComplex(Complex n1, Complex n2);
            or
        public:
            friend Complex sumComplex(Complex n1, Complex n2); 
6. It cannot be accesse members directly by their names, need object_name.member_name
to access any member
ex : o1.a 

*/