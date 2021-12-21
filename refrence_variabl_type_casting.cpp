#include <iostream>
#include <typeinfo>

using namespace std;

int c = 45; // global variable
int main() {
    // ******************** Built in data types  ************ /
    /*
    int a, b, c;
    cout << "Enter first value : "<< endl;
    cin >> a;
    cout << "Enter second value : " << endl;
    cin >> b;
    c = a + b ;
    cout << "Total is : "<< c << endl;
    cout << "The global variable is : " << ::c <<endl;  //This is for get glbal value in local
    */
    // ********************float, double, and long double literals  ************ /
   /*
   float d = 34.4F;
   long double e = 34.5L;

  

   cout << "The size of 34.4 " << sizeof(34.4) << endl;
   cout << "The size of 34.4f " << sizeof(34.4f) << endl;
   cout << "The size of 34.4F " << sizeof(34.4F) << endl;
   cout << "The size of 34.4l " << sizeof(34.4l) << endl;
   cout << "The size of 34.4L " << sizeof(34.4L) << endl;

    
   cout << "The float value is : " << d << endl << "The long double value is : " << e <<endl;
  */
// ******************** Reference variables  ************ /
// Ramu ---> Remo -- > ram  like alia names similarwaya variables also
/*
float x = 455;
float & y = x;

cout << "X : " << x << endl;
cout << "Y : " << y << endl;
*/
// ******************** Type casting  ************ /
//Typecasting is nothing but convert one datatype to anther like int to float 

int a = 45.43;
float b = 45.25;
cout << typeid(a).name() << endl;
cout << typeid(b).name() << endl;

cout << "The value of a is : "<< (float)a << endl;
cout << "The value of a is : "<< float(a) << endl;

cout << "The value of b is : "<< int(b) << endl;
cout << "The value of b is : "<< (int)b << endl;

cout << "Type of a : " << typeid(a).name() << endl;

int c = int(b);
cout << "c is : "<< c <<endl;

cout << "The expression is : " << a + b <<endl;
cout << "The expression is : " << a + int(b)<<endl;
cout << "The expression is : " << a + (int)b<<endl;







return 0;

}