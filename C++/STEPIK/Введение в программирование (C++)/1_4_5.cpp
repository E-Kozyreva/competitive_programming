#include <iostream>

int FindRepeat(int n1, int n2, int n3)
{
    int count;
    if (n1 == n2 && n2 == n3) {
        count = 3;
    } else if (n1 == n2 && n1 != n3 && n2 != n3) {
        count = 2;
    } else if (n1 != n2 && n1 == n3 && n2 != n3) {
        count = 2;
    } else if (n1 != n2 && n1 != n3 && n2 == n3) {
        count = 2;
    } else {
        count = 0;
    }
    return count;
}

int main() 
{
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    std::cout << FindRepeat(num1, num2, num3);
    return 0;
}
