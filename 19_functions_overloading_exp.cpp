#include <iostream>
#include <string>
using namespace std;

void cit(int old, float new_emps) {

	cout << "cit old and new : " << old << " New : " << new_emps << "\n";
}
void cit(string lead) {

	cout << "Lead is  : " << lead <<"\n";
}

int main() {

	//string myString = "Hello";   // String
	

	int old, new_emps;
	string lead;
	old = 15;
	new_emps = 4;
	lead = "rahul";
	
	cit(old, new_emps);
	cit(lead);

	return 0;
}	