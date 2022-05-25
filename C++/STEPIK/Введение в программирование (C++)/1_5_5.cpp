#include <iostream>

int main() 
{
    int count = 0;
    int number;
    std::cin >> number;
    
    while (number != 0) {
        count += 1;
        std::cin >> number;
    }
    std::cout << count;
    return 0;
}
