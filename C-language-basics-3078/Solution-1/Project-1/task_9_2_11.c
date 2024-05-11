/*
Дана строка. Найти в ней слова, которые начинаются и оканчиваются одной и той
же буквой. Слова разделяются пробелами.

Входные данные:
Символьная строка. Длина строки не превышает 50 символов без учёта символа 
перевода строки и нуль символа.

Выходные данные:
Вывести из строки слова, которые начинаются и заканчиваются одной и той же
буквой. Выводить в том же порядке, в котором они встречаются в исходной строке.

Sample Input:
youngcoder.ru tnt and ten fiaif ug.ru

Sample Output:
tnt fiaif ug.ru

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int task_9_2_11(void) {

    char a[100];
    fgets(a, 100, stdin);


    int counter = 0;
    while (a[counter] != '\n') {
        counter++;
    }

    a[counter] = ' ';


    int flag = 0;
    int i = 0;
    char start_ch;
    int j = 0;
    int start_index = 0;
    int end_index = 0;
    int start_end_index[100] = { 0 };

    while (a[i] != '\0') {

        if (((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) && flag == 0) {
            flag = 1;
            start_ch = a[i];
            start_index = i;

        }

        else if (((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) && flag == 1 && a[i+1] == ' ') {
            if (a[i] == start_ch) {
                end_index = i;
                start_end_index[j] = start_index;
                start_end_index[j+1] = end_index;
                j += 2;

            }
            else {
                start_index = 0;

            }
            flag = 0;
            i++;
        }

        i++;
    }

    int z = 0;
    while (z < j) {
        for (int k = start_end_index[z]; k <= start_end_index[z + 1]; k++) {
            printf("%c", a[k]);
        }
        printf(" ");
        z += 2;
    }


    return 0;
}