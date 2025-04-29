#include <iostream>
#include <string>
using namespace std;

void reverse(const string& str) {
    for (int i = str.length()-1; i >= 0; --i) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    setlocale(0, "Russian");
    string inputString;
    cout << "Введите слово: ";
    cin >> inputString;
    reverse(inputString);
    return 0;
}
