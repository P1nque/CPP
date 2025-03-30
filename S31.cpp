#include <iostream>
#include <string>
using namespace std;
int main() {
    int num;
    setlocale(0, "Russian");
    string digits[] = {"ноль", "один", "два", "три", "четыре",
                               "пять", "шесть", "семь", "восемь", "девять"};
    cout << "Введите цифру от 0 до 9: ";
    cin >> num;

    if (num >= 0 && num <= 9) {
        cout << digits[num] << endl;
    }
    else {
        cout << "Ошибка: введена цифра вне диапазона 0-9" << endl;
    }
    return 0;
}
