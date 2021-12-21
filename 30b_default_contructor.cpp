#include<iostream>
#include<math.h>
using namespace std;
class point{
    private:
        int a;
        int b;
        friend void distance1(point, point);
    public:
        
        point(int x, int y){
            a = x;
            b = y;
        }
        void displayPoint(){
            cout << "The point is ("<<a<<", "<<b<<")"<<endl;
        }
};

void distance1(point p1, point p2){
    int x_diff = p2.a - p1.a;
    int y_diff = p2.b - p1.b;
    cout << "x points : "<< x_diff << " ; y points : "<< y_diff<<endl;
    //double dis = sqrt((x_diff)*(x_diff) + (y_diff)*(y_diff));
    float dis = sqrt(pow((p2.a - p1.a), 2)+ pow((p2.b - p1.b),2));
    cout << "Distance between two points is "<< dis <<endl;
    
}



// Create a function (Hint : Make it friend function ) which take two point objects and computes the distance between  those 2 points
// Use these example to check your code
// Distance between (1, 1) and (1,1) is 0
// Distance between (0, 1) and (0,6) is 5
// Distance between (1, 0) and (70,0) is 69
int main() {
    point p(1,0);  // implicitly call 

    point q = point(70,0); // explicitly call
    q.displayPoint();
    p.displayPoint();
    distance1(p, q);
    return 0 ;
}


