#include <iostream>
using namespace std;
int main() {
	int n, m;
	int s = 0, counter = 0;
	cin >> n >> m;
	int** a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[i][j] != 0) {
				s += a[i][j];
				counter++;
			}
		}
	}
	cout << s / (counter * 1.);
}
