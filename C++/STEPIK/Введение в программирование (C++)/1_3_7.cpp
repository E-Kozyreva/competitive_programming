#include <iostream>

int main() 
{
    
    int number;
    std::cin >> number;
    
    if (number % 2 == 0) {
        std::cout << number + 2;
    } else {
        cout << number + 1;
    }
    return 0;
}
