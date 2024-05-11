/*
Имя файла.
Вывести полное название файла в формате

имя_файла.расширение

Входные данные:
Две символьных строки, записанные каждая с новой строки. В первой строке 
записано имя файла (не более 25 символов), а во второй -- его расширение 
(3 символа).

Выходные данные:
Одна строка указанного формата.

Sample Input:
Stepik
exe

Sample Output:
Stepik.exe
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int task_9_3_2(void) {

    char str1[100];
    scanf("%s", str1);
    char str2[5];
    scanf("%s", str2);

    strcat(str1, ".");
    strcat(str1, str2);
    printf("%s", str1);

    return 0;
}