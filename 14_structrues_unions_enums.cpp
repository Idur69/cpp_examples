#include<iostream>
#include <string>
using namespace std;

typedef struct employee
{
    int eId;
    string name;
    float salary;
}emp;
// union is used to one variable at a time. we can't use multiple.
union building_block 
{
    int ece;
    int mech;
    float fees;
};


int main() {
    emp harry; 
    string myname, name;
    myname = "idur";
    // or
    struct employee ramu;
    harry.eId = 69;
    harry.name = 'shyam';
    harry.salary = 1200000;
    cout<< "Id : "<< harry.eId <<endl;
    cout<< "name : " << harry.name << endl;
    cout<< "salary : " << harry.salary << endl;

    cout << "------- unions ----------\n";
    union building_block bb;
    bb.mech = 2;
    //bb.ece = 1;
    cout<<"Mechanical block : "<< bb.mech << endl;
    //cout<<"Ece  block : "<< bb.mech << endl;

    cout << "\n------- enum ----------\n";
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout << (m1 == 0) <<endl;

    cout << breakfast <<endl;
    cout << lunch <<endl;
    cout << dinner <<endl;


    return 0 ;
}