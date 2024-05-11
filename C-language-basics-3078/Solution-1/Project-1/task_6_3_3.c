/*
Написать программу проверяющую, является ли правильной дробь AB.

Входные данные:
Два натуральных числа A,B.

Выходные данные:
Строка yes, если дробь правильная, строка no в противном случае.

Справка:

Дробь называется правильной, если знаменатель больше числителя

Sample Input 1:
87 47

Sample Output 1:
no

Sample nput 2:
1 2

Sample Output 2:
yes

*/


#include <stdio.h>

int task_6_3_3(void) {
    int a, b;


    scanf_s("%i %i", &a, &b);

    if (a < b) {
        printf("yes");
    }
    else
    {
        printf("no");

    }

    return 0;
}