// Friend classes and friend member functions
#include <iostream>
using namespace std;
// Forword Declration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // Individually declaring function as friend
    //friend int Calculator ::sumRealComplex(Complex, Complex);
    //friend int Calculator ::sumCompComplex(Complex, Complex);

    // Alter : Declare the entire  calculator class as friend
    friend class Calculator ;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is :" << a << " + " << b << "i" << endl;
    }
};
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{   

    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    //Creat object of calculator class;
    Calculator cal;
    int res = cal.sumRealComplex(o1, o2);
    cout << "The  sum of real part of o1 and o2 is " << res << endl;
    int resc = cal.sumCompComplex(o1, o2);
    cout << "The  sum of Complex part of o1 and o2 is " << resc << endl;


    return 0;
}