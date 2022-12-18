#include <iostream>
using namespace std;
int main() {
    int n, m, q, w;
    cin >> n >> m;
    cin >> q >> w;
    int** a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    bool f = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] >= q && a[i][j] <= w) {
                f = true;
            }
            else {
                f = false;
                break;
            }
        }

        if (f == true) {
            for (int k = i; k < n; k++) {
                a[k] = a[k + 1];
            }
            n--;
            i--;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
