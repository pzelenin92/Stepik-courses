/*
Разделить массив на две части, поместив в первую элементы, большие среднего
арифметического массива, а во вторую — меньшие и равные среднему арифметическому.


Входные данные:
Первая строка число N,(N>0) -- длина массива. Длина массива не более 100 
элементов. Вторая строка NN  натуральных чисел, записанных через пробел

Выходные данные:
Новый массив, в котором сначала записаны элементы, большие среднего
арифметического массива, а потом -- меньшие либо равные. Внутри частей элементы
располагать в том порядке, в котором они встретились в исходном массиве.

Sample Input 1:

5
10 93 22 75 12

Sample Output 1:
93 75 10 22 12

Sample Input 2:
4
4 3 2 1

Sample Output 2:
4 3 2 1

*/


#include <stdio.h>


int task_8_1_7(void) {
    int a, b;
    float sum = 0;
    float avr;
    int lcounter = 0, pcounter = 0;

    int arrl[100] = { 0 };
    int arrp[100] = { 0 };

    scanf_s("%d", &a);
    int arr[100] = { 0 };

    for (int i = 0; i < a; i++)
    {
        scanf_s("%d", &b);
        arr[i] = b;
    }


    for (int i = 0; i < a; i++)
    {
        sum += arr[i];
    }

    avr = sum / a;


    for (int i = 0; i < a; i++)
    {
        if (arr[i] > avr) {
            arrl[lcounter] = arr[i];
            lcounter++;

        }
        else if (arr[i] <= avr) {
            arrp[pcounter] = arr[i];
            pcounter++;
        }
    }

    for (int i = 0; i < lcounter; i++) {
        printf("%d ", arrl[i]);
    }
    for (int i = 0; i <pcounter; i++) {
        printf("%d ", arrp[i]);
    }


    return 0;
}