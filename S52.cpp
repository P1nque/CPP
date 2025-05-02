#include <iostream>
using namespace std;

void print(int num) {
    cout << num << endl;
}   

void print(float num) {
    cout << num << endl;
}

void print(char ch) {
    cout << ch << endl;
}

void print(int num1, int num2) {
    cout << num1 << endl;
    cout << num2 << endl;
}

int main() {
    print(52);        
    print(5.1f);      
    print('A');        
    print(1, 2);       
    return 0;
}
