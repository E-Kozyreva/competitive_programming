#include <iostream>

int main()
{
  int num1, num2, num3, num4, num5;
  std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
  int all_numbers[5] = {num1, num2, num3,
                        num4, num5};
  int sum = all_numbers[0];
  
  for (int i = 1; i < 5; ++i) {
      sum += all_numbers[i];
      std::cout << sum << endl;
  }
  return 0;
}
