#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        static int count;
    public:
        void setData(void){
            cout << "Enter number :\n";
            cin>>id;
            count++;

        }
        void getData(void){
            cout << "The id of the Employee is  :"<<id<<" and Employe number is :" <<count<<endl;
            
        }
        static void getCount(void){
            //cout<< id <<endl; // thrown error invalid use of member Employee::id in static mumber function
            cout << "The value of count is :"<< count<<endl;
        }

};
// Count is static data member of class Employee
int Employee :: count; // Default value is 0;
//int Employee :: count=100;
int main() {

    Employee harry, virat, krish;
    //emp.id = 12;
    //emp.count = 0;  // cannot do this as id and count are private
    harry.setData();
    harry.getData();
    Employee::getCount();

    krish.setData();
    krish.getData();
    Employee::getCount();
    return 0 ;
}