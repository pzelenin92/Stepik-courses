/*
Напишите программу считающую произведение цифр заданного k-значного 
числа XX.

Входные данные: Два целых числа.
Первое число k -- количество цифр в числе XX. 1≤k≤4
Второе число X. Некоторое kk-значное число.

Выходные данные:
Целое число. Произведение цифр числа XX.

Sample Input:

4
2224

Sample Output:
32



*/

#include <stdio.h>

int task_6_1_8(void) {
    int k, x;
    int x1, x2, x3, x4;
    int out;

    scanf_s("%i %i", &k, &x);



    switch (k) {

    case 1: out = x; break;
    case 2: 
        x1 = x / 10;
        x2 = x % 10;
        out = x1 * x2; break;
    case 3: 
        x1 = x / 100;
        x2 = x / 10 % 10;
        x3 = x % 10;
        out = x1*x2*x3; break;
    case 4:
        x1 = x / 1000; // 1я цифра
        x2 = x / 100 % 10; // 2я
        x3 = (x % 100) / 10; // 3я
        x4 = x % 10; // 4я
        out = x1*x2*x3*x4; break;

    }

    printf("%i", out);

    return 0;
}