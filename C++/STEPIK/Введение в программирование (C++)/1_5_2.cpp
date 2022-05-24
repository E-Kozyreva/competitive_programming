#include <iostream>

int main() 
{
    int number;
    int divider = 2;
    std::cin >> number;
    
    while (divider <= number) {
        if (number % divider == 0) {
            std::cout << divider;
            break;
        }
        divider += 1;
    }
    return 0;
}
