#include <iostream>
#include <stdlib.h>

int comp1 (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main() {
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    int numbers[3] = {num1, num2, num3};
    
    qsort (numbers, 3, sizeof(int), comp1);
    for(int i = 0; i < 3; i++)
        std::cout << numbers[i]<<" ";
    return 0;
}
