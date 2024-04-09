/*

Сравнение строк
Даны две строки. Необходимо сравнить строки между собой с учётом регистра 
символов.

Входные данные:
Две символьных строки, записанные каждая с новой строки. Длина строк не 
более 50 символов.

Выходные данные:
yes если строки полностью совпадают, no в противном случае.

Sample Input:

stepik
Stepik

Sample Output:
no

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int task_9_3_4(void) {

    char str1[100];
    scanf("%s", str1);

    char str2[100];
    scanf("%s", str2);


    if (strcmp(str1, str2)==0) {
        printf("yes");
    }
    else {
        printf("no");
    }


    return 0;
}