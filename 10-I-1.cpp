#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct point
{
    double x, y, z;
    point(double a, double b, double c);
    double get_rast();
    void show_coords();
};
point::point(double a, double b, double c){
    x = a;
    y = b;
    z = c;
}
double point :: get_rast(){
    return sqrt(x*x + y*y + z*z);
}
void point :: show_coords(){
    cout << x << " " << y << " " << z << endl;
}

int main(){
    setlocale(LC_ALL, "Russian");
    int n;
    double x, y, z;
    string xs, ys, zs;
    point *points[100];
    cout << "Введите количество точек\n";
    cin >> n;
    cout << "Вводите координаты каждой точки через пробел\n";
    for (int i = 0; i < n; i++){
        getline(cin, xs, ' ');
        getline(cin, ys, ' ');
        getline(cin, zs);
        x = stod(xs);
        y = stod(ys);
        z = stod(zs);
        points[i] = new point(x, y, z);
    }
    auto min_point = points[0];
    double min_r = points[0]->get_rast();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i != j){
                if (points[i]->get_rast() < min_r){
                    min_r = points[i]->get_rast();
                    min_point = points[i];
                }
            }
        }
    }
    cout << "Найдена ближайшая к началу координат точка, вот ее координаты:\n";
    cout << "x y z\n";
    min_point -> show_coords();
}
