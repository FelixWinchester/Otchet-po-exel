#include <iostream>
using namespace std;

int main() {
	int n, k1;
	cin >> n;
	cin >> k1;
	int maxi = -100000000000;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > maxi) {
			maxi = a[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == maxi) {
			for (int j = n; j > i+1; j--) {
				a[j] = a[j - 1];		
			}
			a[i+1] = k1;
			n++;
			i += 1;
		}
		
	}
			for (int i = 0; i < n; i++) {
				cout << a[i] << "\t";
			}
}

	
