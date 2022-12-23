#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, s0;
    char c;

    setlocale(LC_ALL, "Russian");
    cout << "Введите строку S: ";
    getline(cin, s);
    cout << "Введите символ: ";
    getline(cin, s0);
    cout << "Введите слово: ";
    cin >> c;

    string result;
    for (size_t i = 0; i < s.length(); i++) {
        result += s[i];
        if (s[i] == c) {
            result += s0;
        }
    }
    cout << "Результирующая строка: \"" << result << "\"" << endl;
    system("pause");
}
