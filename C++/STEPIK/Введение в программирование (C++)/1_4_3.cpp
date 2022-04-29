#include <iostream>
#include<algorithm>

int MaxNumber(int num1, int num2, int num3)
{ 
    int number = std::max({num1, num2, num3});
    return number;
}
    
int main() 
{
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
  
    std::cout << MaxNumber(num1, num2, num3);
    return 0;
}
