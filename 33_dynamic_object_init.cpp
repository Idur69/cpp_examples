// Dynamic initialization of object using constructor

#include<iostream>
using namespace std;
class BankDeposite{
    private:
        int principal;
        int years;
        float intrestRate;
        float returnAmount;
    public:
        BankDeposite(){}
        BankDeposite(int p, int y, float r); // rvalue can be like this 0.04
        BankDeposite(int p, int y, int r); // rvalue can be like this 12
        void show(){
            cout << "Principal amount was : "<< principal
            << ". Return value after  "<< years
            << "years is Intrest Rate is : " << intrestRate
            << " Return Amount is : "<< returnAmount <<endl;
        }
};
BankDeposite :: BankDeposite(int p, int y, float r){
    principal = p;
    years = y;
    intrestRate = r;
    returnAmount = principal;
    for (int i = 0; i < y; i++){
        returnAmount = returnAmount * (1+intrestRate);
    }
}
BankDeposite :: BankDeposite(int p, int y, int r){
    principal = p;
    years = y;
    intrestRate = float(r/100);
    returnAmount = principal;
    for (int i = 0; i < y; i++){
        returnAmount = returnAmount * (1+intrestRate);
    }
}

int main() {
    BankDeposite bd1, bd2;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of p y and r :"<<endl;
    cin>> p>>y>>r;
    bd1 = BankDeposite(p, y, r);
    bd1.show();

    cout << "Enter the value of p y and r :"<<endl;
    cin>> p>>y>>R;
    bd2 = BankDeposite(p, y, r);
    bd2.show();
    return 0 ;
}