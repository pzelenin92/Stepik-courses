/*
Усовершенствуйте программу, написанную на прошлом шаге. 
Теперь она должна работать для любых целых чисел, включая случай,
когда b=0

Входные данные:
Два целых числа a, b и символ действия c.

Выходные данные:
Одно вещественное число, либо строку ERROR!, если введено
недопустимое действие или действие выполнить невозможно
(деление на ноль). Формат вывода чисел: два знака после запятой.

Sample Input:
45 23 +

Sample Output:
68.00


*/

#include <stdio.h>

int task_6_1_5(void) {
    char s;
    int a, b;
    double out;

    scanf_s("%i %i %c", &a, &b, &s);
    //scanf_s("%c", &s);


    switch (s) {

    case '+': printf("%.2f", (float)a + b); break;
    case '-': printf("%.2f", (float)a - b); break;
    case '*': printf("%.2f", (float)a * b); break;
    case '/': 
        switch (b) {
        case 0: printf("ERROR!"); break;
        default: printf("%.2f", (float)a / b); break;
        }; break;
    default: printf("ERROR!"); break;

    }


    return 0;
}