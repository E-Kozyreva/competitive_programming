#include <iostream>  

int main() 
{
    int num;
    cin >> num;
    cout << ((num % 100) - (num % 10)) / 10;
    return 0;
}
