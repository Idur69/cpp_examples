
#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>

class Idur{
    public:
        T1 a;
        T2 b;
        T3 c;
        Idur(T1 x  , T2 y , T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout << "The value of a : "<< a <<endl;
            cout << "The value of b : "<< b <<endl;
            cout << "The value of c : "<< c <<endl;

        }
};
int main() {
    Idur <> obj(3,4.5,'I');
    obj.display();
    cout <<endl;

    Idur <float, char, int> obj2(3.333,'D',43);
    obj2.display();
    return 0 ;
}