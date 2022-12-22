#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
    int counter = 0;
    int n = 100000000;
    string s, ns;
    ifstream in("aboba.txt");
    while (getline(in, s)) {
        if (s.size() < n) {
            counter++;
            n = s.size();
            ns = s;
            
        }
    }
    cout << ns << " " << counter << "\t" << n;
    in.close();
    return 0;
}
