#include <cmath>
#include <iostream>
using namespace std;

double polygonArea(double A, int N) {
  double a = M_PI / N;
  return N * A * A / (4 * tan(a));

}
int main(){
  setlocale(0,"Russian");
  double A;
  cout << "Введите длину стороны: "<< endl;
  cin >> A;
  int N;
  cout << "Введите количество сторон: "<< endl;
  cin >> N;
  cout << "Площадь " << N <<"-угольника с длинной стороны "<< A << ": " <<polygonArea(A, N)<< endl;

return 0;
}
