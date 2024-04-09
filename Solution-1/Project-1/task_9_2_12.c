/*
Шифровка.
В строке слова зашифрованы — каждое из них записано наоборот. 
Написать программу, расшифровывающую строку.

Входные данные:
Символьная строка. Длина строки не превышает 40 символов без учёта символа 
перевода строки и нуль символа.

Выходные данные:
Вывести расшифрованную строку.

Sample Input:
sI ur.redoCgnuoY a doog ?etis

Sample Output:
Is YoungCoder.ru a good site?

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int task_9_2_12(void) {

    char a[100];

    int word_counter = 0;
    while (scanf("%s", a) == 1) {
        word_counter++;
        if (word_counter > 1) {
            printf(" ");
        }
        int len = 0;
        while (a[len] != '\0') {
            len++;
        }

        for (int i = len -1; i >= 0; i--) {
            printf("%c", a[i]);
        }
        
    }

    return 0;
}