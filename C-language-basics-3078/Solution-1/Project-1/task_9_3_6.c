/*
Счастливый билетик.
Напишите программу проверки того, что число, записанное в строке, является 
номером счастливого билетика. Билет называется счастливым, если сумма первых
трёх цифр номера билета равняется сумме последних трёх цифр номера билета.

Входные данные:
Одна строка, содержащая число.  Длина строки 6 символов.

Выходные данные:
yes если строка является номером счастливого билетика, no в противном случае.


Sample Input 1:
123204

Sample Output 1:
yes

Sample Input 2:
123456

Sample Output 2:
no

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int task_9_3_6(void) {

    char str1[100];
    fgets(str1, 100, stdin);

    int i = 0;
    int sum1 = 0;
    int sum2 = 0;
    while (i < 3) {
        sum1 += str1[i];
        i++;
    }

    while (i < 6) {
        sum2 += str1[i];
        i++;
    }


    if (sum1 == sum2) {
        printf("yes");
    }
    else {
        printf("no");
    }


    return 0;
}