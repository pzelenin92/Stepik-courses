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
void reduce_fraction(int* a, int* b);
int gcd(int x, int y);

int task_10_3_7(void) {

    int x, y;

    scanf("%d %d", &x, &y);

    reduce_fraction(&x, &y);

    printf("%d %d", x, y);

    return 0;
}

void reduce_fraction(int* a, int* b) {
    int gcd_res = gcd(*a, *b);
    *a /= gcd_res;
    *b /= gcd_res;
}

//int gcd(int x, int y) {
//    int res, min, max;
//    if (x < y) {
//        min = x;
//        max = y;
//    }
//    else {
//        min = y;
//        max = x;
//    }
//
//    for (int i = min; i > 0; i--) {
//        if (min % i == 0 && max % i == 0) {
//            res = i;
//            break;
//        }
//    }
//
//    return res;
//
//}

