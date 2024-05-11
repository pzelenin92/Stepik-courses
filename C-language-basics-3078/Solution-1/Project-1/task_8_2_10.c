/*
Змейка
Для заданных чисел M и N сформировать матрицу, заполненную по спирали числами
от 1 до M⋅N

Входные данные:
Два натуральных числа M и N. M и N не превышают 10.

Выходные данные:
Вывести на экран массив M на N, указанного вида. Формат вывода каждого числа 3 знака на число, выравнивание по правому краю.


Тестовые данные

Sample Input:

6 7

Sample Output:

  1  2  3  4  5  6  7
 22 23 24 25 26 27  8
 21 36 37 38 39 28  9
 20 35 42 41 40 29 10
 19 34 33 32 31 30 11
 18 17 16 15 14 13 12

*/

#include <stdio.h>
int task_8_2_10(void) {
    int a, b, c;

    scanf_s("%d %d", &a, &b);

    int arr[10][10] = { 0 };

    int dir = 0;
    int left = 0, right = b - 1, up = 1, bottom = a - 1;

    int i = 0, j = 0;
    int counter = 1;

    while (counter < a * b + 1)
    {
        arr[i][j] = counter;

        if (dir == 0) {
            if (j == right) {
                dir = 1;
                //i++;
                right -= 1;
            }
            else {
                j++;
            }
        }
        if (dir == 1) {
            if (i == bottom) {
                dir = 2;
                //j--;
                bottom -= 1;
            }
            else {
                i++;
            }
        }
        if (dir == 2) {
            if (j == left) {
                dir = 3;
                //i--;
                left += 1;
            }
            else {
                j--;
            }
        }
        if (dir == 3) {
            if (i == up) {
                dir = 0;
                j++;
                up += 1;
            }
            else {
                i--;
            }
        }
        counter++;
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}