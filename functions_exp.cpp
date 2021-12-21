


#include <iostream>
#include <string>
using namespace std;

// declaring function
void cit_fun() {

	cout << "well come to cpp form idur:\n";
}

// fucntion parameter
void cit_branch(int code, string city, float salary) {
	cout << "------Employe details ----------: \n";
	cout << "Employe code : " << code <<"\n";
	cout << "Employe branch :" << city <<"\n";
	cout << "Employe salry : " << salary <<"\n";
}
int cit_employess(int old_emp, int new_emp) {

	return (old_emp + new_emp);
}

int main() {

	cout << "main called\n";
	// calling function
	cit_fun();
	int code = 567;
	string city = "Hyderabad";
	float salary = 80000.00;
	cit_branch(code, city, salary);
	int employees, old_emps, new_emps;

	cout << "Enter old employess count :\n";
	cin >> old_emps;
	cout << "Enter new employees count : \n";
	cin >> new_emps;
	//char leadname = 'rahul';
	//employees = cit_employess(15, 4);
	employees = cit_employess(old_emps, new_emps );
	cout << "Total CIT Employess : " << employees << endl;

	return 0;
}

