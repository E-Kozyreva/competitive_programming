#include <iostream>
#include <algorithm>

void max_min(int num, int n1, int n2) 
{
    std::cout << num << std::min(n1, n2) << std::max(n1, n2);
    std::cout << std::endl;
    std::cout << num << std::max(n1, n2) << std::min(n1, n2);
    std::cout << std::endl;
}

int main() 
{
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    
    max_min(num1, num2, num3);
    max_min(num2, num1, num3);
    max_min(num3, num1, num2);
    
    return 0;
}
