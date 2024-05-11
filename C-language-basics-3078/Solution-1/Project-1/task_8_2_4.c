/*
По заданному числу N сформировать матрицу (N×N) следующего вида:


1    2    3   ...  n-2  n-1  n
2    1    2   ...  n-3  n-2  n-1
3    2    1   ...  n-4  n-3  n-2
...              ...
n-1  n-2  n-3 ...  2    1    2
n    n-1  n-2 ...  3    2    1

Входные данные:
Одно натуральное число N.

Выходные данные:
Вывести на экран массив N на N, указанного вида. Числа разделять пробелами.

Sample Input:
4

Sample Output:
1 2 3 4
2 1 2 3
3 2 1 2
4 3 2 1
*/


#include <stdio.h>


int task_8_2_4(void) {
    int a;
    int k;

    scanf_s("%d", &a);
    int arr[100][100] = { 0 };

    for (int i = 0; i < a; i++)
    {
        k = 1;
        for (int j = i; j < a; j++) {

            arr[i][j] = k;
            k++;
        }
    }

    for (int i = 0; i < a; i++)
    {
        k = 1;
        for (int j = i; j < a; j++) {

            arr[j][i] = k;
            k++;
        }
    }



    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");

    }

    return 0;
}