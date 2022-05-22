#include <iostream>

int main() 
{
    int time;
    int h, mm, ss;
    std::cin >> time;
    h = (time / 3600) % 24;
    mm = (time / 60) % 60;
    ss = time % 60;
    
    std::cout << h << ":";
    std::cout << mm / 10 << mm % 10 << ":";
    std::cout << ss / 10 << ss % 10;
    return 0;
}
