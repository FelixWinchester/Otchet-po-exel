#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; ++i, cout << endl) {
        for (int j = 0; j < i; j += 1) {
            cout << i << "\t";
        }
        cout << endl;
        for (int j = 0; j < i; j += 1) {
            cout << 0 << "\t";
        }

    }
    return 0;
}
