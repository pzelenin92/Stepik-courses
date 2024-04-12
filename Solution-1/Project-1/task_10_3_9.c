/*
Напишите функцию int minmax(int arr[], int n, int fl),
которая возвращает максимальный или минимальный элемент массива arr,
в зависимости от значения флага fl. 0 -- минимум, 1 -- максимум.

Sample Input:
5
10 -93 22 75 12
 1

Sample Output:
75

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int minmax_2(int arr[], int n, int fl);

int task_10_3_9(void) {

    int x, fl;
    int y[100] = { 0 };

    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &y[i]);
    }
    scanf("%d", &fl);


    int res = abs_arr(y, x, fl);

    printf("%d ", res);

 /*   for (int i = 1; i < x; i++) {
        printf("%d ", y[i]);
    }*/

    return 0;
}

int minmax_2(int arr[], int n, int fl) {
    int res = arr[0];

    if (fl) {

        for (int i = 0; i < n; i++) {
            if (arr[i] > res) {
                res = arr[i];

            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if (arr[i] < res) {
                res = arr[i];

            }
        }
    }
    return res;
}

