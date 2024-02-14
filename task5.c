/* Задача 5. Поменять местами 
Составить функцию, которая меняет в массиве минимальный и максимальный элемент местами.
Прототип функции:
void change_max_min(int size, int a[]) 
Данные на входе: Функция принимает на вход размер массива и массив чисел типа int 
Данные на выходе: Функция не возвращает значения, измененный массив сохраняется на месте исходного. 
Пример 
Данные на входе: 1 2 3 4 5 6 7 8 9 10 
Данные на выходе: 10 2 3 4 5 6 7 8 9 1
*/
#include <stdio.h>

#define SIZE 10

void change_max_min(int size, int a[]);

int main(void)
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    change_max_min(SIZE, arr);

    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}

void change_max_min(int size, int a[])
{
    int min = a[0], index_min = 0;
    int max = a[0], index_max = 0;

    for (int i = 1; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index_min = i;
        }  
        else if (a[i] > max)
        {
            max = a[i];
            index_max = i;
        }
    }
    int temp = a[index_min];
    a[index_min] = a[index_max];
    a[index_max] = temp;
}