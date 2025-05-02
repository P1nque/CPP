#include <iostream>

using namespace std;

class Bucket {
public:

    double volume;
    double used;

    Bucket(double vol) : volume(vol), used(0) {}

    void flush() {
        used = 0;
    }

    double fill(double v) {
        double available = volume - used;
        if (v <= available) {
            used += v;
            return 0;
        }
        else {
            used = volume;
            return v - available;
        }
    }
};

int main() {
    setlocale(0, "Russian");
    Bucket myBucket(10);

    cout << "Объем ведра: " << myBucket.volume << " литров" << endl;
    cout << "Сейчас в ведре: " << myBucket.used << " литров" << endl;

    double overflow = myBucket.fill(5);
    cout << "Попытка налить 5 литров. Не поместилось: " << overflow << " литров" << endl;
    cout << "Сейчас в ведре: " << myBucket.used << " литров" << endl;

    overflow = myBucket.fill(7);
    cout << "Попытка налить 7 литров. Не поместилось: " << overflow << " литров" << endl;
    cout << "Сейчас в ведре: " << myBucket.used << " литров" << endl;

    myBucket.flush();
    cout << "Опустошили ведро." << endl;
    cout << "Сейчас в ведре: " << myBucket.used << " литров" << endl;

  return 0;
}
