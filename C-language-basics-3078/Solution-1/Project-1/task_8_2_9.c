/*
Циклический сдвиг
Произвести циклический сдвиг столбцов квадратной матрицы A[N] на K позиций 
вправо.

Входные данные:
Одно натуральное число N. Далее с новой строки N строк по N целых чисел в 
каждой. N не превышают десяти. Затем с новой строки записано натуральное число KK.

Выходные данные:
Вывести на исходную матрицу N на N, столбцы которой циклически сдвинуты на K 
позиций вправо. Числа разделять пробелами.

Sample Input 1:

3
1 2 3
1 4 5
2 3 -2
2

Sample Output 1:

2 3 1
4 5 1
3 -2 2

Sample Input 2:

3
1 2 3
1 4 5
2 3 -2
4

Sample Output 2:

3 1 2
5 1 4
-2 2 3

*/

#include <stdio.h>
int task_8_2_9(void) {
    int a, k, c;

    scanf_s("%d", &a);

    int arr[10][10] = { 0 };
    int arr_out[10][10] = { 0 };


    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            scanf_s("%d", &c);
            arr[i][j] = c;
        }
    }

    scanf_s("%d", &k);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            int new_j = (j + k) % a;
            arr_out[i][new_j] = arr[i][j];
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", arr_out[i][j]);
        }
        printf("\n");
    }

    return 0;
}