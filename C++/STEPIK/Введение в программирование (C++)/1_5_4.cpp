#include <iostream>
#include <cmath>

int main() 
{
    int number;
    int pow_n = 0;
    std::cin >> number;
    
    while (pow(2, pow_n) < number) {
        pow_n += 1;
    }

    if (number == pow(2, pow_n)) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}
