#include <iostream>

int get_sum(int n)
{
    n = (n - (n % 1000)) / 1000;
    return n;
}


int main() 
{
    int n1, n2, n3, n4, n5;
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;
    int numbers[5] = {n1, n2, n3, n4, n5};
    
    int sum = 0;
    for (int i = 0; i < 5; i++) 
    {
        sum += get_sum(numbers[i]);
    }
    
    std::cout << sum;
    return 0;
}
