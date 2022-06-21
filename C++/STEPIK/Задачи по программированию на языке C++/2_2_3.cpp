#include <iostream>

int main() 
{
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    
    if (num1 != 0)
        std::cout << num1 << num2 << num3;
    else if (num1 == 0 && num2 != 0)
        std::cout << num2 << num3;
    else if (num1 == 0 && num2 == 0)
        std::cout << num3;
    
    return 0;
}
