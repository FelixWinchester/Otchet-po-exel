#include <iostream>
#include <iomanip>
#include <cmath>
	using namespace std;
	double e = 1e-9;
	double f(double x) {
		int i = 1;
		int a, b;
		double c = 1;
		a = 1;
		b = 3;
		while (x > e) {
			a *= b;
			b += 2;
			x = pow(x, i) / a;					
			c += x;
			i++;
		}
		return c;
	}
int main () {
	double h;
	cin >> h;
	for (double i = 0.05; i <= 0.95;i+=h) {
		cout << i << " " << f(i) << endl;
	}
}
