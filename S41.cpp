#include <iostream>
using namespace std;

double squared_sum(double a, double b) {
    double sum = a + b;
    return sum * sum;
}

int main() {
    setlocale(0, "Russian");
    cout << "Квадрат суммы 12 и 6: " << squared_sum(12, 6) << endl;
    cout << "Квадрат суммы 12 и -6: " << squared_sum(12, -6) << endl;
    cout << "Квадрат суммы -17.8 и 52.2: " << squared_sum(-17.8, 52.2) << endl;

    return 0;
}
