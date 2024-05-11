/*
Написать программу, проверяющую, можно ли из букв, входящих в первую строку,
составить вторую строку. (буквы можно использовать не более одного раза и
можно переставлять)

Входные данные:
Две символьных строки, записанные каждая с новой строки. Длина строк не более
50 символов. Строки состоят только из строчных букв латинского алфавита.

Выходные данные:
yes -- если из букв первой строки, можно составить вторую строку, no --
в противном случае.

Sample Input 1:
zaza
baka

Sample Output 1:
no

Sample Input 2:
integral
agent

Sample Output 2:
yes

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int task_9_3_7(void) {

    char str1[100];
    fgets(str1, 100, stdin);
    char str2[100];
    fgets(str2, 100, stdin);

    int counter = 0;
    for (int i = 0; i<strlen(str1); i++) {
        for (int j = 0; j < strlen(str2); j++) {
            if (str2[j] == str1[i]) {
                str2[j] = 1;
                counter++;
                break;
            }
        }
    }


    if (strlen(str2) == counter && strlen(str2) <= strlen(str1)) {
        printf("yes");
    }
    else {
        printf("no");
    }


    return 0;
}