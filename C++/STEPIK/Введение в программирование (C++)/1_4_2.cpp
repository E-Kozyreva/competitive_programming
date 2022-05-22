#include <iostream>

int MaxNumber(int num1, int num2) 
{
    if (num1 > num2) {
        return 1;
    } else if (num1 < num2) {
        return 2;
    }
    return 0;
}

int main() 
{
    int num1, num2;
    std::cin >> num1 >> num2;
    
    std::cout << MaxNumber(num1, num2);
    return 0;
}
