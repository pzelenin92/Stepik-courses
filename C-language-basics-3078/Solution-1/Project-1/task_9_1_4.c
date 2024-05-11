/*
Определить тип символа.

Входные данные:
Один символ.

Выходные данные:
digit -- если это цифра, en -- если это буква латинского алфавита.
В иных случаях вывести error.

Sample Input 1:
g

Sample Output 1:
en

Sample Input 2:
5

Sample Output 2:
digit



*/


#include <stdio.h>


int task_9_1_4(void) {
    char a;

    scanf_s("%c", &a);

    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        printf("en");
    }
    else if (a >= '0' && a <= '9') {
        printf("digit");
    }
    else {
        printf("error");
    }


    return 0;
}