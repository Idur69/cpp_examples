#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main() {
    // Function Object : Function wrapped in a class so that it will be like a object

    int arr[] = {13,5,7,2,34, 19};
    //sort(arr, arr+5);
    sort(arr, arr+6, greater<int>());
    
    for (int i = 0; i < 6; i++){
        cout<< arr[i] << " ";
    }
    return 0 ;
}