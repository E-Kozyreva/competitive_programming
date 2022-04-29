#include <iostream>

void FindTriangle(int a, int b, int c)
{
    if (a < b + c && b < a + c && c < a + b) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}

int main() 
{
    int a, b, c;
    std::cin >> a >> b >> c;
    
    FindTriangle(a, b, c);
    return 0;
}
