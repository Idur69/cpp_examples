#include <iostream>
#include<string>

using namespace std;

int factorial(int);

int main() {

	int n, result;

	cout << "Enter non negative number \n ";
	cin >> n;

	result = factorial(n);
	cout << "Factorial of : "<< result <<endl;

	return 0;
}

int factorial(int n) {
	cout << "----------factorial call  -------------: \n";
	int fac;
	if (n >1) {
		cout << "n : " << n <<endl;
		//cout << "f : "<< factorial(n-1);
		fac = factorial(n-1);
		cout << " result factorial : "<< n   << "* "<< fac <<" = "<<n * fac<<"\n";
		return n * fac;
	}
	else {
		cout << "else reurn 1 \n";
		return 1;
	}
	cout << "========================= \n ";
}