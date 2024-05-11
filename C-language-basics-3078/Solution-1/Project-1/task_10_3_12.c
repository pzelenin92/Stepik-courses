/*
В прошлой программе, чтобы найти элемент в массиве вам потребовалось 
перебрать по-очереди все элементы массива.

Но если нам будет дополнительно известно, что массив упорядочен,
то перебирать все элементы не нужно. Например:



Формальное описание алгоритма из википедии:

    Определить значения элемента в середине массива. Полученное значение сравнивается с ключом(тем, что ищем).
    Если ключ меньше значения серединного элемента, то поиск осуществляется в первой половине элементов, иначе — во второй.
    Поиск сводится к тому, что вновь определяется значение серединного элемента в выбранной половине и сравнивается с ключом.
    Процесс продолжается до тех пор, пока не будет найден элемент со значением ключа или не станет пустым интервал для поиска.

Sample Input 1:
5
-93 10 12 22 75
22

Sample Output 1:
3

Sample Input 2:
7
-56 -30 -25 14 46 80 88
87

Sample Output 2:
-1

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int binary_search(int arr[], int n, int arg);

int task_10_3_12(void) {

    int x, fl;
    int y[100] = { 0 };

    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        scanf("%d", &y[i]);
    }

    scanf("%d", &fl);

    int res = binary_search(y, x, fl);
    printf("%d", res);

    /*for (int i = 0; i < x; i++) {
        printf("%d ", y[i]);
    }*/

    return 0;
}

int binary_search(int arr[], int n, int arg) {
    int first = 0;
    int last = n;
    int res = -1;


    while (first < last) {
        int mid = (last + first) / 2;

        if (arg <= arr[mid])
            last = mid;
        else
            first = mid+1;
    }

    if (last < n && arr[last] == arg)
        res = last;

    return res;
}