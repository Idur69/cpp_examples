#include<iostream>
using namespace std;

class Student
{   
    protected:
        int rolnum;
    public:
        void set_rolNumber(int);
        void get_rolNumber();
};
void Student :: set_rolNumber(int r){
    rolnum = r;
}
void Student::get_rolNumber(){
    cout<< "Your number is : "<< rolnum <<endl;
}
class Exam : public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m, float p){
            maths = m;
            physics = p;
        }
        void get_marks(){
            cout << "Marks obtained  in Maths and Physics : "<< maths << " and " << physics <<endl;
        }
};
class Result :  public Exam{
    float per;
    public:
        
        void display_results(){
            get_rolNumber();
            get_marks();
            cout << "your results are : "<< (maths + physics) / 2 << endl;
        }
};
int main() {
    Result harry;
    harry.set_rolNumber(69);
    harry.set_marks(87.8, 85.6);
    harry.display_results();
    
    return 0 ;
}