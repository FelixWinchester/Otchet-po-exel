#include <iostream>
using namespace std;
int main() {
	int n, c, x;
	cin >> n;
	int maxi = -1000000;
	int mini = 100000;
	int a[101];
	for (int i = 0; i < n; i++) {;
		cin >> a[i];
		if (a[i] > maxi) {
			maxi = a[i];
			c = i;
		}

	}
	x = a[0];
	a[0] = maxi;
	a[c] = x;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

