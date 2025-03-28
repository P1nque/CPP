#include <iostream>
#include <fstream>
using namespace std;

int main(){

setlocale(0, "Russian");
int A,B;
    std::cin >> A>>B;
    std::ofstream out("output.txt");
for (int i=A;i<=B;++i){
    out << i*3<<std::endl;
}



return 0;
}
