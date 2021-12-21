#include<iostream>
using namespace std;

// Base class
class Employee{
    public:
        int id;
        float salary;
        Employee(int inpId){
            id = inpId;
            salary = 20000.00;

        }
        Employee(){};
};

// Derrived class
class Programmer : public Employee{
    public:
        int languageCode;
        Programmer(int inpId){
            languageCode = 9;
            id = inpId;
        }
        void getData(){
            cout<<"Id :" << id <<" Lang code :"<< languageCode<< " Salary : "<<salary<<endl;
        }
};
int main() {
    Employee harry(22), rohan(34);
    Programmer pr1(89);
    cout<<"id  and salary: "<< harry.id <<" and "<<harry.salary<<endl;
    cout<<"id  and salary: "<< rohan.id <<" and "<<rohan.salary<<endl;

    pr1.getData();
    return 0 ;
}