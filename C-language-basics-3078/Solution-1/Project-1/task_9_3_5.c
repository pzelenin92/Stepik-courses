/*
Сравнение строк
Даны две строки. Необходимо сравнить строки между собой без учёта регистра 
символов.

Входные данные:
Две символьных строки, записанные каждая с новой строки. Длина строк не
более 50 символов.

Выходные данные:
yes если строки полностью совпадают, no в противном случае.

Sample Input:
Hello WorlD
hello world

Sample Output:
yes

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


char* lwr(char* s) {
    for (int i = 0; i < strlen(s); ++i)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 'a' - 'A';
    return s;
}

int task_9_3_5(void) {

    char str1[100];
    fgets(str1, 100, stdin);
    char str2[100];
    fgets(str2, 100, stdin);


    lwr(str1);
    lwr(str2);

    if (strcmp(str1, str2) == 0) {
        printf("yes");
    }
    else {
        printf("no");
    }


    return 0;
}