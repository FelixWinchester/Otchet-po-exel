#include <iostream>
using namespace std;
int main() {
	int n;
	int a[101];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 7 != 0) {
			cout << "nomer= " << i + 1 << "\t" << i << endl;

		}
	}
}




#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int a[101][102];
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
