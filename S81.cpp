#include <iostream>
#include <clocale>

using namespace std;

class CreditCard {
public:
    string cardNumber;
    double balance;

    CreditCard(string num, double bal) : cardNumber(num), balance(bal) {}

    CreditCard operator+(CreditCard & other) {
        balance += other.balance;
        other.balance = 0;
        return *this;
    }

    void printInfo() {
        cout << "Номер карты: " << cardNumber << endl;
        cout << "Баланс: " << balance << endl;
    }
};

int main() {
    setlocale(0, "Russian");

    CreditCard card1("1538-5523-7612-3426", 12000);
    CreditCard card2("5123-5232-1790-7324", 7000);

    cout << "Информация о картах до операции +:" << endl;
    card1.printInfo();
    card2.printInfo();

    card1 = card1 + card2;

    cout << "\nИнформация о картах после операции +:" << endl;
    card1.printInfo();
    card2.printInfo();

    return 0;
}
