#include<iostream>
using namespace std;
/*
float avgFunction(float a, float b){
    float avg = (a + b) /2.0;
    return avg;
}
float avgFunction2(float a, float b){
    float avg = (a + b) /2.0;
    return avg;
}*/
// use templates

template <class T1, class T2>

float avgFunction(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
int myswap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main() {
    float avg, avg2;
    avg = avgFunction(5.45,9.47);
    cout << "Avg : "<< avg <<endl;
    
    //printf("Average of these numbers is s %.3f", avg);

    int x = 9, y = 3;
    myswap(x, y);
    cout << "swap : "<< x << y <<endl;
    return 0 ;
}