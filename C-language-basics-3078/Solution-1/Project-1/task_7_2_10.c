/*

Дано натуральное число N. Найти наименьшее натуральное число r
, такое, что 2r≥N

Входные данные:
Одно натуральное число N.

Выходные данные:
Число r.

Sample Input 1:
128

Sample Output 1:
7

Sample Input 2:
1

Sample Output 2:
1

Sample Input 3:
7

Sample Output 3:
3

*/


#include <stdio.h>
#include <math.h>

int task_7_2_10(void) {
    int a, b;
    int i = 1;
    scanf_s("%i", &a);

    b = pow(2, i);
    while (b < a)
    {
        i++;
        b = pow(2, i);
    }

    printf("%i ", i);

    return 0;
}