#include <iostream>

int main() 
{
    char num[4];
    std::cin >> num;
    
    std::cout << num[0] << num[1];
    std::cout << " ";
    std::cout << num[2] << num[3];
    return 0;
}
