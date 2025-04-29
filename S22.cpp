#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(0, "Russian");
    int i = 1;
    int n;

    ifstream outputFile("output.txt");

    if (!outputFile.is_open()) {
        cerr << "Файла 'output.txt' не существует" << endl;
        return 1;
    }

    while(outputFile >> n) {
        cout << i << ". " << n << endl;
        i++;
    }
    outputFile.close();
    return 0;
}
