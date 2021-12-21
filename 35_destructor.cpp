#include<iostream>
using namespace std;

//  Destructor never takes an arguments nor does it return any value
int count = 0;
class num{
    
    public:
    num(){
        count++;
        cout<<"This is time when constructor called for object number "<<count<<endl;
    }
    ~num(){
        
        cout<<"This is time when destructor called for object number "<<count<<endl;
        count--;
    }
};

int main() {
    cout<<"We are in main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main function"<<endl;
    return 0 ;
}