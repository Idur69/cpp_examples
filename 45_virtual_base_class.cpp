#include<iostream>
#include<string>
using namespace std;


/*
student--test
student--sports
test -- results
sports -- results
*/

class Student{
    protected:
        int roll_no;
    public:
        int set_rollNumber(int a){
            roll_no = a;
        }
        void print_rollnumber(void){
            cout << "Your roll number is : "<< roll_no <<endl;
        }

};
class Test: virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m, float p){
            maths = m;
            physics = p;
        }
        void print_marks(void){
            cout << "Your result here : "<<endl
                << "Maths : "<< maths <<endl
                << "Physics : "<< physics <<endl;
        }
};
class Sports : virtual public Student{
    protected:
        string game;
        float score;
    public:
        void set_game(string g, float sc){
        //void set_score(float sc){
            game = g;
            score = sc;
        }
        void print_game(void){
            cout << "Playing game  : "<< game <<" score is :"<< score <<endl;
        }
};
class Results: public Test, public Sports{
    private:
        int total;
    public:
        void display(void){
            total = maths + physics + score;
            print_rollnumber();
            print_marks();
            print_game();
            cout << "The total score is : "<< total <<endl;
        }
};
int main() {
    Results harry;
    harry.set_rollNumber(69);
    harry.set_marks(87.9, 89.5);
    string game = "cricket";
    harry.set_game(game, 240);
    //harry.set_score(40);
    harry.display();

    return 0 ;
}