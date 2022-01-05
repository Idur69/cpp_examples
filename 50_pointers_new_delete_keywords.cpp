
#include<iostream>
using namespace std;
int main() {
    int a = 4;
    int* ptr = a;
    cout << "The value of a  is : "<< a << " and address " <<  &a <<endl;
    cout << "The pointer addres : "<< ptr <<endl;
    cout << "The value of pointer is  : " << *(ptr) 
    << " Address  of pointer : "<<&ptr<< endl;

    // new key word or operator
    float *p = new float(40.45);
    cout << "The value of  p is :" <<*(p) << " address is :  "<< &p <<endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    //delete[] arr;  // delete operator
    cout << "The value of array a[0] is : " << arr[0] << " address "<< &(arr)<< endl;
    cout << "The value of array a[1] is : " << arr[1] << " address "<< &(arr)<< endl;
    cout << "The value of array a[2] is : " << arr[2] << " address "<< &(arr)<< endl;
    
    
    return 0 ;
}