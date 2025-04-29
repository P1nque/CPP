#include <iostream>
#include <cmath>

using namespace std;

double get_angle(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) return -1;
    double cos_angle = (b * b + c * c - a * a) / (2 * b * c);
    if (cos_angle < -1 || cos_angle > 1) return -1;
    return acos(cos_angle) * 180.0 / M_PI;
}

int main() {
    setlocale(0, "Russian");
    double a, b, c;
    cout << "Введите три стороны треугольника:" << '\n';
    cin >> a >> b >> c;
    double angle = get_angle(a, b, c);
    if (angle != -1){
        cout << angle;
    }else {
        cerr << "Ошибка: стороны треугольника не попадают под условия";
    }

    return 0;
}
