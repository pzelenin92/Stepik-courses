/*
Факториал.
Для целого числа k(0≤k≤12) посчитать k!.

Входные данные:
Одно целое число k, (0≤k≤12).

Выходные данные:
Значение факториала числа k.

Sample Input:
4

Sample Output:
24

*/


#include <stdio.h>

int task_7_1_5(void) {
    int a;
    int out =1;

    scanf_s("%i", &a);


    for (int i = 1; i <= a; i++) {
        out = out * i;
    }



    printf("%i ", out);

    return 0;
}