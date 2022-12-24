#include <iostream>
#include <cmath>
using namespace std;

int opa(float x) {
    if (x < 1) {
        cout << "Nein";
    }
    else {
        return log(x - 1);

    }
} 
    int main() {
        float a, b, h, x;
        cout << "a= ";
        cin >> a;
        cout << "b= ";
        cin >> b;
        cout << "h= ";
        cin >> h;
        cout << "x\tf(x)\n";
            for (x = a; x <= b; x += h) {
                cout << x << "\t";
                cout << opa(x);
                cout << endl;
            }
        return 0;
    }
