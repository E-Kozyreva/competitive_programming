#include <iostream>

int main() 
{
    char num[5];
    std::cin >> num;
    
    std::cout << num[4] << num[3];
    std::cout << num[2] << num[1];
    std::cout << num[0];
    return 0;
}
