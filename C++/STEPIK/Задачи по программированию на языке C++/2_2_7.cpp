#include <iostream>
#include <cmath>

int main() 
{
    int a, b, c;
    std::cin >> a >> b >> c;
    
    int ac = 18*pow(a, 2) - 4*a*c + pow(c, 2);
    int ab = pow(a, 2) - 2*a*b + pow(b, 2);
    
    std::cout << ac - 4 * pow(ab, 2);
    return 0;
}
