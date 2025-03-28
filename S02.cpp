#include <iostream>

int main() {
    setlocale(0, "Russian");
    int a = 4, b = 2;
    std::cout << "Нацело: " << a / b << std::endl;
    std::cout << "Остаток: " << a % b << std::endl;
    return 0;
}
