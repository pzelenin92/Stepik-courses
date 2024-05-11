/*
Напишите функцию int linear_search(int arr[], int n, int arg), 
которая находит позицию первого вхождения элемента со значением arg
в массиве arr. Если такой элемент не найден, то функция должна
возвращать значение -1.

Sample Input 1:
5
10 -93 22 75 12
22

Sample Output 1:
2

Sample Input 2:
5
10 -93 22 75 12
15

Sample Output 2:
-1
*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int linear_search(int arr[], int n, int arg);

int task_10_3_11(void) {

    int x, fl;
    int y[100] = { 0 };

    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        scanf("%d", &y[i]);
    }

    scanf("%d", &fl);

    int res = linear_search(y, x, fl);
    printf("%d", res);

    /*for (int i = 0; i < x; i++) {
        printf("%d ", y[i]);
    }*/

    return 0;
}

int linear_search(int arr[], int n, int arg) {
    int res=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arg) {
            res = i;
            break;
        }
    }
    return res;
}