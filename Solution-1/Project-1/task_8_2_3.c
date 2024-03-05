/*
По заданному числу N сформировать матрицу (N×N) следующего вида:

1  2    3   ...  n-1  n
n  n-1  n-2 ...  2    1
1  2    3   ...  n-1  n
n  n-1  n-2 ...  2    1
1  2    3   ...  n-1  n
n  n-1  n-2 ...  2    1


Входные данные:
Одно натуральное число N.

Выходные данные:
Вывести на экран массив N на N, указанного вида. Числа разделят
пробелами.

Sample Input 1:
4

Sample Output 1:
1 2 3 4
4 3 2 1
1 2 3 4
4 3 2 1

Sample Input 2:
5

Sample Output 2:
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5

*/


#include <stdio.h>


int task_8_2_3(void) {
    int a;


    scanf_s("%d", &a);
    int arr[10][10] = { 0 };

    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < a; j++)
            {
                arr[i][j] = j + 1;
            }
        }
        else
        {
            for (int j = 0; j < a; j++)
            {
                arr[i][j] = arr[i-1][a-1-j];
            }
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