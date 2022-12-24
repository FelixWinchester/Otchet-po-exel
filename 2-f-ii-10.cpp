#include <iostream>

    using namespace std;
    int f(int &x) {
        if (x % 2 == 0) {
            x = x / 2;
        }
        else {
            x = 0;
            
        }
        return 0;
    }
    int main()  {
        int i, d;
        cin >> i;
        f(i);
        cout << i;  
    }                               
