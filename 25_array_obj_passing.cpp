// Array objects and passing object as Function argument

#include<iostream>
using namespace std;
class Employee
{
private:
    int id;
    int salary;
public:
    void setId(void){
        cout << "Enter id :\n";
        cin>>id;
        salary = 200000;
    }
    void getId(void){
        cout<<"Enter the id of Employee is "<<id<<endl;
    }
};

int main() {
    Employee harry, krish, virat;
    /*harry.setId();
    harry.getId();
    krish.setId();
    krish.getId();
    */
    //create arry of employes
    Employee emp[4];
    for (int i = 0; i < 4; i++){
        emp[i].setId();
        emp[i].getId();
    }
    return 0 ;
}