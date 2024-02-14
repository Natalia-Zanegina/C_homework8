/* Задача 6. Больше среднего 
Определить количество положительных элементов квадратной матрицы, превышающих по величине среднее арифметическое всех элементов главной диагонали.
Реализовать функцию среднее арифметическое главной диагонали. 

Данные на входе: 5 строк по 5 целых чисел через пробел 
Данные на выходе: Одно целое число 

Пример 
Данные на входе: 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5 
Данные на выходе: 10
*/
#include <stdio.h>
#define SIZE 5

int main_daigonal_average(int size, int matrix[][SIZE]);
int more_than_main_diagonal_average(int size, int matrix[][SIZE]);

int main(void)
{
    int m[][SIZE] = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5};

    printf("%d\n", more_than_main_diagonal_average(SIZE, m));
    
    return 0;
}

int main_daigonal_average(int size, int matrix[][SIZE])
{
    int sum = 0, average = 0;
    for (int i = 0; i < size; i++)
        sum += matrix[i][i];
    average = sum / size;
    return average;
}

int more_than_main_diagonal_average(int size, int matrix[][SIZE])
{
    int count = 0;
    int average = main_daigonal_average(size, matrix);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] > average)
                count++;
        }  
    }
    return count;
}
