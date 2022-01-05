#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int i,float p){
            id = i;
            price = p;
        }
        void getData(void){
            cout<< "Code of the item is : " << id <<endl;
            cout << "price of the item is : "<< price <<endl;
        }
};

//flow of temp pointer
//      1   2   3
//              ^
//              |
//              |
//              ptr
//      ptrTemp
int main() {
    int size = 3;
    //int *ptr = &size;
    //int *ptr = new int [34];
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p, i;
    float q;
    for (i =0; i < size; i++){
        cout << "Enter id and price :"<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++){
        
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0 ;
}