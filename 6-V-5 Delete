#include <iostream>
using namespace std;

int main() {
	int n, k1, k2;
	cin >> n;
	cin >> k1 >> k2;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (i >= k1 && i <= k2) {


			for (int j = i; j < n; j++) {

				a[j] = a[j + 1];
				

			}
			n--;
			k2--;
			i--;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
