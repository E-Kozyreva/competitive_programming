#include <iostream>
#include <cmath>

int main() 
{
    int number;
    int pow_n = 0;
    std::cin >> number;
    
    while (pow(2, pow_n) <= number) {
        std::cout << pow(2, pow_n) << " ";
        pow_n += 1;
    }
    return 0;
}
