#include <iostream>
#include <string>     

int main() 
{
    std::string num;
    std::cin >> num;
    
    int n1, n2, n3;
    n1 = num[0] - 48;
    n2 = num[1] - 48;
    n3 = num[2] - 48;
    
    std::cout << n1 + n2 + n3;
    return 0;
}
