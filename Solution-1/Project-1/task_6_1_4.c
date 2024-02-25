/*
Напишите программу-калькулятор для четырёх основных арифметических
действий.

Входные данные:
Символ действия cc и два целых числа a, b (b≠0)

Выходные данные:
Одно вещественное число, либо строку ERROR!,
если введено недопустимое действие. Формат вывода чисел:
два знака после запятой.

Sample Input:
+ 45 23

Sample Output:
68.00

*/

#include <stdio.h>
#include <locale.h>

int task_6_1_4(void) {
    //setlocale(LC_ALL, "Russian"); // для использования кириллицы
    char s;
    int a, b;
    double out;

    scanf_s("%c",&s);
    scanf_s("%i %i", &a, &b);

    switch (s) {

    case '+': printf("%.2f", (float)a + b); break;
    case '-': printf("%.2f", (float)a - b); break;
    case '*': printf("%.2f", (float)a * b); break;
    case '/': printf("%.2f", (float)a / b); break;
    default: printf("ERROR!"); break;

    }


    return 0;
}