﻿/*
Для заданной квадратной матрицы A[N] посчитать следующие величины:

    сумму элементов, находящихся над главной диагональю
    сумму элементов, расположенных под побочной диагональю


Входные данные
Одно натуральное число N. Далее с новой строки N строк по N целых чисел в каждой.
N не превышают десяти.

Выходные данные:
Два целых числа, записанных через пробел. Первым вывести меньшее из чисел.

Sample Input 1:

3
1 2 3
1 4 5
9 3 -7

Sample Output 1:
1 10

Sample Input 2:
6
5 -3 6 -4 7 -1
4 2 6 -3 -7 -8
-3 -2 3 -9 -9 6
-3 9 9 -4 -3 -1
8 8 2 6 7 1
9 5 0 4 9 3

Sample Output 2:
-22 18


*/

#include <stdio.h>
int task_8_2_6(void) {
    int a, c;
    int p1=0, p2 = 0;

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
        for (int j = i+1; j < a; j++) {
            p1 += arr[i][j];
        }
    }

    for (int i = a - 1; i >= 0; i--)
    {
        for (int j = a - i ; j < a; j++) {
            p2 += arr[i][j];
        }
    }


    if (p1 < p2) {
        printf("%d %d", p1, p2);
    }
    else {
        printf("%d %d", p2, p1);
    }



    return 0;
}