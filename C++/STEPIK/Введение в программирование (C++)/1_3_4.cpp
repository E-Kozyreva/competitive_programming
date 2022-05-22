#include <iostream>
#include <string>     

int main() 
{
    int number;
    std::cin >> number;
    std::cout << ((number % 100) - (number % 10)) / 10;
    return 0;
}
