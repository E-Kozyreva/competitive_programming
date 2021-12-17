#include <stdio.h>
#include <stdlib.h>


typedef struct data_types{
  int sum[10000];
  int count_positive_numbers[10000];
  int count_multiple_elements[10000];
} data;


int restart();


void sum_of_odd_elements(int count, int numbers_array[2][count / 2]){

  data all_data;

  for (int i = 0; i < 1; i++){
    for (int j = 0; j < count / 2; j++){

      if (numbers_array[i][j] % 2 != 0 && numbers_array[i + 1][j] % 2 != 0)
        all_data.sum[j] = numbers_array[i][j] + numbers_array[i + 1][j];
      else if (numbers_array[i][j] % 2 != 0 && numbers_array[i + 1][j] % 2 == 0)
        all_data.sum[j] = numbers_array[i][j];
      else if (numbers_array[i][j] % 2 == 0 && numbers_array[i + 1][j] % 2 != 0)
        all_data.sum[j] = numbers_array[i + 1][j];
      else
        all_data.sum[j] = 0;
    }
  }

  printf("\nСУММА НЕЧЁТНЫХ ЭЛЕМЕНТОВ:\n");
  for (int column = 0; column < count / 2; column++){
    printf("%d столбец: %d\n", column + 1, all_data.sum[column]);
  }
}


void count_of_abs_elements(int count, int numbers_array[2][count / 2]){ 

  data all_data;
  
  for (int i = 0; i < 1; i++){
    for (int j = 0; j < count / 2; j++){

      if (numbers_array[i][j] > 0 && numbers_array[i + 1][j] > 0)
        all_data.count_positive_numbers[j] = 2;
      else if (numbers_array[i][j] > 0 || numbers_array[i + 1][j] > 0)
        all_data.count_positive_numbers[j] = 1;
      else if (numbers_array[i][j] < 0 && numbers_array[i + 1][j] < 0)
        all_data.count_positive_numbers[j] = -1;
      else if (numbers_array[i][j] == 0 && numbers_array[i + 1][j] == 0)
        all_data.count_positive_numbers[j] = 0;
    }
  }

  printf("\nКОЛИЧЕСТВО ПОЛОЖИТЕЛЬНЫХ ЭЛЕМЕНТОВ:\n");
  for (int column = 0; column < count / 2; column++){
    printf("%d столбец: %d\n", column + 1, all_data.count_positive_numbers[column]);
  }
}


void count_of_multiple_lements(int count, int numbers_array[2][count / 2]){ 

  data all_data;
  int a, b;

  printf("\nВведите 2 числа, которым должны быть кратны элементы массива:\n");
  printf("Первое число: ");
  scanf("%d", &a);
  printf("Второе число: ");
  scanf("%d", &b);

  for (int i = 0; i < 1; i++){
    for (int j = 0; j < count / 2; j++){
      
      int count = 0;
      if (numbers_array[i][j] % a == 0 && numbers_array[i][j] % b == 0)
        count++;
      if (numbers_array[i + 1][j] % a == 0 && numbers_array[i + 1][j] % b == 0)
        count++;

      all_data.count_multiple_elements[j] = count;
    }
  }

  printf("\nКОЛИЧЕСТВО ЭЛЕМЕНТОВ КРАТНЫХ A И B:\n"); 
  for (int column = 0; column < count / 2; column++){
    printf("%d столбец: %d\n", column + 1, all_data.count_multiple_elements[column]);
  }
}


int main(){

  int count_numbers, limit_min, limit_max, random_number;

  printf("\nВведите кол-во чисел, которые вы хотите получить: ");
  scanf("%d", &count_numbers);
  printf("Введите минимальное число для диапазона: ");
  scanf("%d", &limit_min);
  printf("Введите максимальное число для диапазона: ");
  scanf("%d", &limit_max);
  printf("\nСлучайно сгененрированный массив:\n");

  int numbers_array[2][count_numbers / 2];

  for (int i = 0; i < 2; i++){
    for (int j = 0; j < count_numbers / 2; j++){

      random_number = (double)(rand()) / RAND_MAX * (limit_max - limit_min) + limit_min;
      numbers_array[i][j] = random_number;
      printf("%d ", numbers_array[i][j]);
    }
    printf("\n");
  }

  sum_of_odd_elements(count_numbers, numbers_array);
  count_of_abs_elements(count_numbers, numbers_array);
  count_of_multiple_lements(count_numbers, numbers_array);
  restart();

  return 0;
}


int restart(){

  int answer;

  printf("\n\nХотите сгенерировать новый двумерный массив?\n");
  printf("1.Да.\n2.Нет.\nВыш ответ: ");
  scanf("%d", &answer);

  if (answer == 1)
    return main();
  else if (answer == 2)
    printf("\nПрограмма остановлена.");
  else
    return restart();

  return 0;
}
