// member functions and overloading template functions

#include<iostream>
using namespace std;

template <class T>
class myOffiece{
    public:
        T data;
        myOffiece(T a){
            data = a;
        }
        
        /*void display(){
            
            cout << "My data : " << data <<endl;
        }*/

        void display();

};
template <class T>
void myOffiece<T>:: display(){
    
    cout << "My data : " << data <<endl;
}

// overloading functions

int func(int a){
    cout<<"first fucn() is "<< a <<endl;
}
template <class T>
int func(T a){
    cout<<"my templatized func() is "<< a <<endl;
}
template <class T>
int func1(T b){
    cout<<"my templatized func() is "<< b <<endl;
}
int main() {
    myOffiece<float> idur(5.88);

    idur.display();
    myOffiece<char>s('T');
    cout<<s.data<<endl;
    s.display();

    // call overloaind functions and template functions
    func(5); // Exact match take hieght priority
    func1(8); // Exact match take hieght priority
    return 0 ;
}