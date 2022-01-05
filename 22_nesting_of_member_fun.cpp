#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class binary{
private:  // it is by default private
    string s;
    void chk_bin(void);
public:
    void read(void);  
    
    void ones_compliment(void);
    void display(void);

};
void binary :: read(void){
    cout << "Enter binary number "<<endl;
    cin >> s;
}
void binary :: chk_bin(void){

    for (int i = 0; i < s.length(); i++){

        if(s.at(i) !='0' &&  s.at(i) != '1'){
            cout <<"Incorrect binary format"<<endl;
            exit(0);  
        }
    }
}
void binary :: ones_compliment(void){
    chk_bin();
    for (int i = 0; i < s.length(); i++){

        if(s.at(i)== '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
    
}
void binary :: display(void){
    cout << "Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++){
       cout << s.at(i);

    }
    cout<<"\n";
}


int main() {

    // OOPS ---> Classes and objects
    // C++ initially called --> c with classes by stroustroup
    // class --> extension of structrue (in c)
    // structure has limitations
    //    - member are public
    //    - No methods

    // classes --> structure  + more
    //      - can have methods and properties
    //      - can make few members as private and few as public

    // structure in c++  are typedefed
    // you can declare objects along with class declration like this:
    /*
    class Employee{
        // Class Defination
    }harry, rohan, navish;
    */
   // harry.salary = 8 makes no sense if salary is private

   // Nesting of member function

    binary b;
    b.read();
    //b.chk_bin();  // we cannot call private functions
    b.ones_compliment();
    b.display();
    return 0 ;
}   