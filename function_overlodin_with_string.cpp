#include<iostream>
using namespace std;
void display(string);
void display(char *);

// calculate the valume of cylinder
int valume(double r, int h) {
    return (3.14 * r * r * h);
}
// calculate the valume of cube
int valume(int a) {
    return (a * a * a);
}
// Rectanguler box
int valume(int l, int b, int h) {
    return ( l * b * h);
}
int main() {
    char str[100];
    string str1;
    cout << "Enter a string : \n";
    getline(cin, str1);

    cout<<"Enter another string : \n";
    cin.get(str, 100, '\n');

    display(str1);
    display(str);
    // valume calculation call function overloading

    cout << "Valume of cyclinder of radious and height : "<< valume(3,6) <<endl;
    cout << "Valume of cube of side : "<< valume(3) <<endl; 
    cout << "Valume of cuboid  : "<< valume(3, 6, 7) <<endl; 

    return 0 ;
} 

void display(string s){

    cout<<"Entered string is : "<< s << endl;
}
void display(char s[]){

    cout<<"Entered char array is : "<< s << endl;
}