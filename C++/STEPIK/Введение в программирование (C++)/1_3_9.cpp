#include <iostream>

int main() {
    int rub, kop, count;
    std::cin >> rub >> kop >> count;
    rub *= count;
    kop *= count;
    if (kop >= 100){
        rub += kop / 100;
        kop %= 100;
    }
    std::cout << rub << " " << kop;
    return 0;
}
