#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* a=new int[n];
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		a[i] = k;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 7 != 0) {
			cout << "nomer= " << i+1 << "\t" << i << endl;

		}
	}
}


#include <iostream>
using namespace std;
int main() {
	int n, m;
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
	int c = 1;
	for (int i = 0; i < n; i++) {
		
		for (int j = 0; j < m; j++) {
			if (a[i][j] % 7 != 0) {
				cout << c << "\t";     
			}
			c++;
		}
		cout << endl;
	}

}
