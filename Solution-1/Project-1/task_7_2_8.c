/*
Количество цифр
Подсчитать количество цифр в записи натурального числа N.

Входные данные:
Одно натуральное число N.

Выходные данные:
Одно целое число k -- количество цифр в записи числа N.

Sample Input:
12938

Sample Output:
5


*/


#include <stdio.h>


int task_7_2_8(void) {
    int a,b;
    int i = 10;
    int counter = 1;

    scanf_s("%i", &a);
    b = a / i;
    while (b != 0)
    {
        counter++;
        i *= 10;
        b = a / i;
    }

    printf("%i", counter);

    return 0;
}