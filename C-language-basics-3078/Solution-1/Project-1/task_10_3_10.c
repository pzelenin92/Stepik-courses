/*

Написать функцию void sort_arr(int arr[], int n, int fl), 
которая сортирует переданный ей массив по возрастанию или убыванию,
в зависимости от значения флага fl: 0 -- от меньшего к большему,
1 -- от большего к меньшему.

Самый простой способ отсортировать массив, например, от меньшего к
большему, это найти минимальный элемент и обменять его местами с
первым элементом массива. Затем снова найти минимальный элемент,
но уже не учитывать первый элемент. Т.е. искать минимум среди
элементов со второго и до конца. Найденный элемент обменять местами 
со вторым элементом массива. Продолжать так до тех пор, пока массив
не кончится.

Sample Input:
5
10 -93 22 75 12
 1

Sample Output:
75 22 12 10 -93

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void sort_arr(int arr[], int n, int fl);

int task_10_3_10(void) {

    int x, fl;
    int y[100] = { 0 };

    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        scanf("%d", &y[i]);
    }

    scanf("%d", &fl);

    sort_arr(y, x, fl);
   
    for (int i = 0; i < x; i++) {
        printf("%d ", y[i]);
    }

    return 0;
}

void sort_arr(int arr[], int n, int fl) {
    int tmp;
    if (!fl) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = n-1; j > i; j--) {
                if (arr[j] > arr[j - 1]) {
                    tmp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = tmp;
                }
            }
        }
    }
}