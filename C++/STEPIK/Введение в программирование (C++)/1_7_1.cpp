#include <iostream>

int main() 
{
    int count, number;
    std::cin >> count;
    for (int i = 0; i < count; i++) {
        std::cin >> number;
        if (i % 2 == 0) {
            std::cout << number << " ";
        }
    }
    return 0;
}
