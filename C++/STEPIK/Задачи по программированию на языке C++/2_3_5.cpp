#include <iostream>

int main() 
{
    int num1, num2;
    std::cin >> num1 >> num2;
    
    int s1 = ((num1 / 100) % 10) + ((num2 / 100) % 10);
    int s2 = ((num1 / 10) % 10) + ((num2 / 10) % 10);
    int s3 = (num1 % 10) + (num2 % 10);
    std::cout << s1 << " " << s2 <<" " << s3;
    
    return 0;
}
