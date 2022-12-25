#include <iostream>
#include <iomanip>
using namespace std;
int sueta(int a, int b) {

	for (int i = a; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {

			return i;
		}
	}
}
int main() {
	int a, b, i,c;
	double  o;
	cin >> a >> b;

	i = sueta(a, b);
	
	cout << a/i << "/" << b/i;
	}
}
