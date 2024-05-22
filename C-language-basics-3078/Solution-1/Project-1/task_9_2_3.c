﻿/*
Поиск символа
Найти в строке заданный символ.

Входные данные:
Первая строка -- символ, который необходимо найти. Затем с новой строки 
записана символьная строка, в которой нужно осуществить поиск. Длина строки
не превышает 100 символов без учёта символа перевода строки и нуль символа.

Выходные данные:
Одно целое число -- индекс первого вхождения искомого символа в входную
строку или число -1, если символ не найден.

Sample Input 1
d
YoungCoder.Ru 2014 - 2017

Sample Output 1:
7

Sample Input 2:
d
Happy New Year! 2018

Sample Output 2:
-1
*/


#include <stdio.h>

int task_9_2_3(void) {

    char c;
    c = getc(stdin);
    getc(stdin);

    char a[100];
    fgets(a, 100, stdin);

    int res = 666;
    int i = 0;
    while (a[i] != '\n') {
        if (a[i] == c) {
            res = i;
            break;
        }

        i++;
    }
    if (res != 666) {
        printf("%d", res);
    }
    else {
        printf("%d", -1);
    }
    return 0;
}