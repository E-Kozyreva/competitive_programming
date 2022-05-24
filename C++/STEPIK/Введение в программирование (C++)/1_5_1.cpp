#include <iostream>
#include <cmath>

int main() 
{
    int number;
    int quadrate = 1;
    std::cin >> number;
    
    while (pow(quadrate, 2) <= number) {
        std::cout << pow(quadrate, 2) << " ";
        quadrate += 1;
    }
    return 0;
}
