﻿/*
Найти среднее арифметическое элементов массива.

Входные данные:
Первая строка число N,(N>0) -- длина массива. Длина массива не более
100 элементов. Вторая строка NN  натуральных чисел, записанных через пробел

Выходные данные:
Одно вещественное число M -- среднее арифметическое элементов массива. Формат
вывода -- два знака после запятой.

Sample Input 1:

5
10 93 22 75 12

Sample Output 1:
42.40

Sample Input 2:
4
4 3 2 1

Sample Output 2:
2.50

*/


#include <stdio.h>


int task_8_1_6(void) {
    int a, b;
    float sum = 0;

    scanf_s("%d", &a);
    int arr[100] = { 0 };

    for (int i = 0; i < a; i++)
    {
        scanf_s("%d", &b);
        arr[i] = b;
    }


    for (int i = 0; i < a; i++)
    {
        sum += arr[i];
    }

    printf("%.2f", sum / a);


    return 0;
}