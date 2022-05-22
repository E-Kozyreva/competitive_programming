#include <iostream>   

int main() {
    
    int class1, class2, class3;
    std::cin >> class1 >> class2 >> class3;
    
    int all_students[3] = {class1, 
                           class2,
                           class3};
    int sum = 0;
    
    for (int i = 0; i < 3; ++i)
    {
        if (all_students[i] % 2 == 0) {
            sum += all_students[i] / 2;
        } else {
            sum += (all_students[i] + 1) / 2;
        }
    }
    
    std::cout << sum;
    return 0;
}
