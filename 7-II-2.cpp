#include "iostream"
#include "string"
#include<conio.h>
using namespace std;

int main()
{
    string str, str1, str2;
    string::size_type k = 0, pos = 0;
    cout << "Enter string\n" << endl;
    getline(cin, str);
    cout << "Enter str1\n" << endl;
    cin >> str1;
    cout << "Enter str2\n" << endl;
    cin >> str2;
    k = str.find(str1, pos);
    int j = str1.length();
    while (k != string::npos)
    {
        str.insert(k + j, str2);
        pos = k + j+3;
        k = str.find(str1, pos);
    }
    cout << str << endl;
    return 0;

}
