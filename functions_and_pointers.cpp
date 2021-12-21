#include<iostream>
using namespace std;
int main() {
    int marks[] = {23,22,26,27};

    cout << "Old marks [2]: "<<marks[2] <<endl;
    // you can change value of array

    marks[2] = 432;
    cout << "added marks [2]: "<<marks[2] <<endl;
    int mathsmarks[4];
    mathsmarks[0] = 34;
    mathsmarks[1] = 44;
    mathsmarks[2] = 53;
     mathsmarks[3] = 63;
    //cout << "New marks [0]: "<< mathsmarks[0] <<endl;
    //cout << "New marks [1]: "<< mathsmarks[1] <<endl;
    //cout << "New marks [2]: "<< mathsmarks[2] <<endl;
    //cout << "New marks [3]: "<< mathsmarks[3] <<endl;
    //cout << "---------- Marks list : ----------\n";
    // using for loop
    for (int i = 0; i < 4; i++){
        
        cout << "The values of the marks"<< i <<" is : " << marks[i] <<endl; 
    }
    /*
    // using while loop:
    int i;
    while(i < 4) 
    {
        cout << "The values of the marks by using while"<< i <<" is : " << marks[i] <<endl; 
        i++;
    }
    // do while loop:
    i =1;
    do
    {
        cout << "The values of the marks by using do while "<< i <<" is : " << marks[i] <<endl; 
        i++;
    }
    while(i <= 4);
     */

    // Pointer and Arrays

    int* p = marks;
    cout << *(p++) <<endl;
    cout << *(++p)<<endl;
    cout << "Address of p "<< &p<<endl;
     for (int i = 0; i < 4; i++){
        cout << "Address of &p each element "<< &p[i]<<endl;
     }
    
    //cout << "Address of *p[1] "<< &p[1]<<endl;
    //cout << "The value of *p is : "<<*p<<endl;
    //cout << "The value of *(p+1) is : "<<*(p+1)<<endl;
    //cout << "The value of *(p+2) is : "<<*(p+2)<<endl;
    //cout << "The value of *(p+3) is : "<<*(p+3)<<endl;
    

    return 0 ;
}