#include <iostream>
#include <string>

using namespace std;

int main() {

	int i, j;
	int tmp[2][3] = {
		{3,2,1},
		{6,5,4}
	};

	for (i=0; i<2; i++) {
		for (j=0; j<3; j++){

			cout << "array["<< i << "]["<<j <<"]" << "=" << tmp[i][j] << endl;
		}
	}
}