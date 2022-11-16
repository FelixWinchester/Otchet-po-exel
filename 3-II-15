#define _USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите номер фигуры: 1 - Круг; 2 - Прямоугольник; 3 - Треугольник" << endl;
	double a, b, c, r, p;
	int x;
	cin >> x;
	switch (x) {
	case 1:
		cout << "Введите радиус" << endl;
		cin >> r;
		cout << M_PI * pow(r, 2);
		break;
	case 2:
		cout << "Введите стороны" << endl;
		cin >> a >> b;
		cout << a * b;
		break;
	case 3:
		cout << "Введите стороны" << endl;
		cin >> a >> b >> c;
		p = (a + b + c) / 2.;
		cout << sqrt(p * (p - a) * (p - b) * (p - c));
		break;
	default: x;
	}
}
