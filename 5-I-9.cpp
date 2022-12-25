#include <iostream>
#include <cmath>
using namespace std;
int main() {	
	int n, a, b,c;
	a = 1;
	b = 0;		
	cin >> n;
	for (int i = 1; i <= n; i++) {

		
		a *= i;
		b += a;

		
	}
	cout << b;
}
