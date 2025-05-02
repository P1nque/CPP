#include <iostream>
#include <locale>

using namespace std;

class CreditCard {
public:
    int Number;
    float Balance;

    CreditCard(int number, float balance) : Number(number), Balance(balance) {}

    void Put(float amount) {
        Balance += amount;
        cout << "Пополнение на сумму: " << amount << endl;
        cout << "Текущий баланс: " << Balance << endl;
    }

    void Take(float amount) {
        if (Balance >= amount) {
            Balance -= amount;
            cout << "Снятие на сумму: " << amount << endl;
            cout << "Текущий баланс: " << Balance << endl;
        }

        else {
            cout << "Снятие на сумму: " << amount << endl;
            cout << "Недостаточно средств на балансе." << endl;
        }
    }
};

int main() {
    setlocale(0, "Russian");

    CreditCard firstCC(1234, 50.0);

    // Тут обращаемся к методу по указателю
    CreditCard* cardPtr = &firstCC;

    cout << "Номер карты: " << cardPtr->Number << endl;
    cout << "Баланс карты: " << cardPtr->Balance << endl;

    cardPtr->Put(100.0);
    cardPtr->Take(25.0);
    cardPtr->Take(200.0);

    return 0;
}
