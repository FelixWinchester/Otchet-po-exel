#include <iostream>
#include <cmath>                                                                                
using namespace std; 
                                                                                             
double died(double x) {
    if (x < 3) {
        return pow(x, 2) - 0.3;
    }
    else if (x >= 3 && x <= 5) {
        return 0;
    }
    else if (x > 5) {
        return pow(x, 2) + 1;
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
        cout << died(x);
        cout << endl;
    }

 }
