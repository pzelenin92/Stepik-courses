﻿/*
Транспонирование
Для заданной матрицы вывести на экран транспонированную матрицу.

Входные данные:
Два натуральных числа N и M. Далее с новой строки N строк по M целых
чисел в каждой. N и M не превышают десяти.

Выходные данные:
Вывести матрицу M на N. Числа в строках записывать через пробел.

Справка:
Транспонированная матрица получается из обычной заменой строк на
столбики. Пример:


Исходная матрица:
1 2 3 4
5 6 7 8

Транспонированная матрица:
1 5
2 6
3 7
4 8

*/


#include <stdio.h>


int task_8_2_2(void) {
    int a, b;


    scanf_s("%d %d", &a, &b);
    int arr[10][10] = { 0 };

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf_s("%d", &arr[i][j]);
        }

    }


    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");

    }


    return 0;
}