#include <iostream>


using namespace std;

int main() {

    cout << "------- Control flow Structures------------------- \n";
    // selection control structure : if else if and else
    int age;
    cout << "Tell me your age? \n";

    cin >> age;
    /*
    if ((age < 18) && (age < 0)) {
        cout << "You are not allowed to party \n";
    }
    else if (age == 18) {
        cout << "if you want to come to party take a pass. \n";
    }else {
        cout << "You are come to party\n";
    }*/

     // selection control structure : switch case statement
    switch (age)
    {
    case 18:
        cout << "You are Teenageer 18 \n";
        break;
    case 22:
        cout << "Your are Younger 22 \n";
        break;
    default:
        cout << "No cases available \n";
        break;
    }
    cout << "Done with switch cases\n";
    return 0;
}