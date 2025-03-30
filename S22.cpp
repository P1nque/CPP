#include <iostream>
#include <fstream>
#include <sstream>

int main() {
    int i = 1;
    std::ifstream f("output.txt");
    std::string l, n;
    while (std::getline(f, l)) {
        std::stringstream s(l);
        while (s >> n){
            std::cout << i++ << ". " << n << std::endl;
        }
    }
}
