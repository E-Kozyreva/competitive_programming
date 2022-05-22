#include <iostream>

void MaxNumber(int num1, int num2) 
{
    if (num1 > num2) {
        std::cout << num1;
    } else if (num1 < num2) {
        std::cout << num2;
    } else {
        std::cout << num1;
    }
}

int main() 
{
    int num1, num2;
    std::cin >> num1;
    std::cin >> num2;
    
    MaxNumber(num1, num2);
    return 0;
}
