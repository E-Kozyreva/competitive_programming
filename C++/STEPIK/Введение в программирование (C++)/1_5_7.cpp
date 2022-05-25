#include <iostream>

int main() 
{
    int max = 0;
    int number;
    std::cin >> number;
    
    while (number != 0) {
        if (max < number) {
            max = number;
        }
        std::cin >> number;
    }
    std::cout << max;
    return 0;
}
