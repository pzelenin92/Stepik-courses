﻿/*
Программа приветствие
Допишите программу приветствие. Программа должна склеивать строку, 
которая уже есть в программе и строку, введенную пользователем.

Входные данные:
Одна символьная строка. Длина строки не более 20 символов.

Выходные данные:
Строка приветствия пользователя.

Sample Input:
KaDeaT

Sample Output:
Hello, KaDeaT

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int task_9_3_1(void) {

    char str1[40] = "Hello, ";
    char str2[20];
    scanf("%s", str2);

    strcat(str1, str2);
    printf("%s", str1);

    return 0;
}