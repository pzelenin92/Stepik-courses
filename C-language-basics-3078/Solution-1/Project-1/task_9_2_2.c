﻿/*
Слова.
Подсчитать количество слов в строке. Под словом будем понимать
непустую последовательность символов, разделённую знаками пробела.

Входные данные:
Символьная строка, состоящая из слов, разделённых пробелами. Длина
строки не превышает 100 символов без учёта символа перевода строки
и нуль символа.

Выходные данные:
Одно целое число -- количество слов во входной символьной строке.

Справка:

Здесь и далее формат строки такой: "YoungCoder.ru 2014 - 2018\n\0".
Тестовые данные

Sample Input:
YoungCoder.Ru 2014 - 2024

Sample Output:
4
*/


#include <stdio.h>
#include <string.h>


int task_9_2_2(void) {
    char a[100];

    fgets(a, 100,stdin);

    int counter = 0;
    int i = 0;
    while (a[i] != '\n') {
        if ((a[i] != ' ' && a[i + 1] == ' ') || (a[i] != ' ' && a[i + 1] == '\n')) {
            counter++;
        }

        i++;
    }

    printf("%d", counter);

    return 0;
}