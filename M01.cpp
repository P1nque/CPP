#include <iostream>
using namespace std;
int main() {
    setlocale(0, "Russian");
cout<<'\t'<<'\t'<<'\t'<<'\t'<<"Таблица Пифагора"<<endl;
    for (int a = 1; a <= 10; a++) {
        for (int b = 1; b <= 10; b++) {
            cout << a * b << '\t';
        }
        cout << endl;
    }
    return 0;
}
