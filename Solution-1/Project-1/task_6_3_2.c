/*
Даны три числа. Подсчитать количество положительных среди этих чисел.

Входные данные:
Три целых числа a,b,c

Выходные данные:
Одно целое число -- количество положительных чисел, среди чисел
a,b,c

Sample Input:
79 -18 88

Sample Output:
2
*/



#include <stdio.h>

int task_6_3_2(void) {
    int a,b,c;
    int res=0;

    scanf_s("%i %i %i", &a, &b, &c);

    if (a > 0) {
        res +=1;
    }

    if (b > 0) {
        res += 1;
    }

    if (c > 0) {
        res += 1;
    }

    printf("%i", res);

    return 0;
}