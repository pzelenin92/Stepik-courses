﻿/*
Диагонали
Для заданной квадратной матрицы A[N][N] посчитать следующие величины:

    произведение элементов, стоящих на главной диагонали
    произведение элементов, стоящих на побочной диагонали

Входные данные:
Одно натуральное число NN. Далее с новой строки NN строк по NN целых чисел в каждой. NN не превышают десяти.

Выходные данные:
Два целых числа, записанных через пробел. Первым вывести большее из чисел.

Sample Input:

3
1 2 3
1 4 5
2 3 -2

Sample Output:
24 -8
*/

#include <stdio.h>
int task_8_2_5(void) {
    int a,c;
    int p1=1, p2=1;

    scanf_s("%d", &a);
    int arr[100][100] = { 0 };


    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            scanf_s("%d", &c);
            arr[i][j] = c;
        }
    }


    for (int i = 0; i < a; i++)
    {
        for (int j = i; j <= i; j++) {
            p1 *= arr[i][j];
        }
    }

    for (int i = a-1; i >= 0; i--)
    {
        for (int j = a-1-i; j <= a-1-i; j++) {
            p2 *= arr[i][j];
        }
    }


    if (p1 > p2) {
        printf("%d %d", p1, p2);
    }
    else {
        printf("%d %d", p2, p1);
    }
    


    return 0;
}