﻿/*
Вывести на экран последние KK символов латинского алфавита в верхнем регистре в алфавитном порядке.

Входные данные:
Одно натуральное число K,(K<27)

Выходные данные:
KK последних символов латинского алфавита.

Sample Input:
3

Sample Output:
XYZ

*/


#include <stdio.h>


int task_9_1_6(void) {
    int a;

    scanf_s("%d", &a);

    for (int i = 27 - a; i < 27; i++) {
        printf("%c", i+ 'A'-1);
    }

    
    return 0;
}