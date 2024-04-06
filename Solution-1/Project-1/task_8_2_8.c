/*
Поменять местами столбцы с минимальной и максимальной суммой элементов.

Входные данные:
Два натуральных числа N и M. Далее с новой строки N строк по M целых чисел 
в каждой. N и M не превышают десяти.

Выходные данные:
Вывести исходную матрицу N на M, в которой столбцы с минимальной и
максимальной суммой элементов поменяны местами. Числа разделять пробелами.
Если присутствует несколько столбцов с одинаковой минимальной суммой элементов
то использовать первый по порядку. Аналогично с максимальной суммой.

Sample Input:

3 4
1 2 3 4
1 3 4 5
0 2 3 -2

Sample Output:

3 2 1 4
4 3 1 5
3 2 0 -2

*/

#include <stdio.h>
int task_8_2_8(void) {
    int a, b, c;
    int s;
    int outp[10] = { 0 };

    scanf_s("%d %d", &a, &b);
    int arr[10][10] = { 0 };
    int arr_out[10][10] = { 0 };


    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf_s("%d", &c);
            arr[i][j] = c;
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            arr_out[i][j] = arr[i][j];
        }
    }


    for (int j = 0; j < b; j++)
    {
        s = 0;
        for (int i = 0; i < a; i++) {
            s += arr[i][j];
        }
        outp[j] = s;
    }

    

    int min = outp[0], max = outp[0];
    int min_ind = 0, max_ind = 0;

    for (int j = 0; j < b; j++) {
        if (outp[j] < min) {
            min = outp[j];
            min_ind = j;
          }
        if (outp[j] > max) {
            max = outp[j];
            max_ind = j;
        }
    }

    int flag_min = 1, flag_max = 1;

    for (int j = 0; j < b; j++) {
        if (outp[j] == min && flag_min == 1) {
            for (int i = 0; i < a; i++) {
                arr_out[i][j] = arr[i][max_ind];
            }
            flag_min = 0;
        }
        if (outp[j] == max && flag_max == 1) {
            for (int i = 0; i < a; i++) {
                arr_out[i][j] = arr[i][min_ind];
            }
            flag_max = 0;
        }
    }


    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", arr_out[i][j]);
        }
        printf("\n");
    }

    return 0;
}