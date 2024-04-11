/*

Написать функцию void minmax(int * x, int * y), записывающую в 
переменную x минимальное из значений x и y, а в переменную y -- 
максимальное из этих значений.

Sample Input:
15 4

Sample Output:
4 15
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void minmax(int* x, int* y);


int task_10_3_3(void) {

    int x, y;
    scanf("%d %d", &x, &y);

    minmax(&x, &y);

    /*printf("%d", n);*/

    return 0;
}

void minmax(int* x, int* y) {
    int tmp;
    if (*x > *y)
    {
        tmp = *x;
        *x = *y;
        *y = tmp;
    }

}