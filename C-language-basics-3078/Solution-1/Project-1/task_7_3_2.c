/*
Пирамида.
Вывести на экран пирамиду из чисел (см. пример входных данных).

Входные данные:
Одно целое число N.

Выходные данные:
Пирамида из натуральных чисел высоты N.

Sample Input 1:
5

Sample Output 1:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Sample Input 2:
1

Sample Output 2:
1


*/


#include <stdio.h>

int task_7_3_2(void) {
    int a;

    scanf_s("%d", &a);

    for (int i = 1; i <=a; i++ )
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n ");
    }



    return 0;
}