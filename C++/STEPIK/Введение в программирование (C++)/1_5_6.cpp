#include <iostream>

int main() 
{
    int sum = 0;
    int number;
    std::cin >> number;
    
    while (number != 0) {
        sum += number;
        std::cin >> number;
    }
    std::cout << sum;
    return 0;
}
