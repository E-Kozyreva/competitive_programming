#include <iostream>

int main() 
{
    int count, number;
    int n = 0;
    std::cin >> count;
    for (int i = 0; i < count; i++) {
        std::cin >> number;
        if (number > 0) {
            n++;
        }
    }
    std::cout << n;
    return 0;
}
