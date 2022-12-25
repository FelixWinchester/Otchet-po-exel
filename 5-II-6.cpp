#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, a, c;
	a = 1;
	double b = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {

		
		a *= i;
		b += 1. / (i * a);

	
	}
		cout << b;
}

