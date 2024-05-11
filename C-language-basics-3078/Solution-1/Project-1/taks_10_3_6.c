/*
Написать функцию void reduce_fraction(int * a, int * b),
которая будет сокращать дробь с числителем a и знаменателем b.
Используйте функцию gcd, написанную на прошлом шаге.

Sample Input:
14 49

Sample Output:
2 7
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int gcd(int x, int y);


int task_10_3_6(void) {

    int x, y;
    
    scanf("%d %d", &x, &y);

    int res = gcd(x, y);

    printf("%d", res);

    return 0;
}

int gcd(int x, int y) {
    int res, min, max;
    if (x < y) {
        min = x;
        max = y;
    }
    else {
        min = y;
        max = x;
    }

    for (int i = min; i > 0; i--) {
        if (min % i == 0 && max % i == 0) {
            res = i;
            break;
        }
    }

    return res;

}

