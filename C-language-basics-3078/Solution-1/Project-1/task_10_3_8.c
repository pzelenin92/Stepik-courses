/*
Напишите функцию int abs_arr(int arr[], int n),
которая заменяет отрицательные элементы массива их модулями.
Кроме того, функция должна возвращать количество произведенных
замен.

Sample Input:
5
10 -93 22 75 12

Sample Output:
1 10 93 22 75 12

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int abs_arr(int arr[], int n);

int task_10_3_8(void) {

    int x;
    int y[100] = { 0 };

    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &y[i]);
    }
    

    int res = abs_arr(y, x);

    printf("%d ",res);

    for (int i = 1; i < x; i++) {
        printf("%d ", y[i]);
    }

    return 0;
}

int abs_arr(int arr[], int n) {
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
            counter++;
        }
    }
    return counter;
}

