#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(0, "Russian");
    int A, B;
    cin >> A >> B;
    ofstream out("output.txt");
    
    for (int i = A; i <= B; ++i) {
        out << i * 3 << endl;
    }
    
    return 0;
}
