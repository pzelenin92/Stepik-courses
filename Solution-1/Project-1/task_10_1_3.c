/*


Факториал.
Напишите функцию с именем factorial, которая вычисляет факториал числа,
переданного ей в качестве аргумента.

Входные данные:
Одно целое неотрицательное число N,(N<13)

Выходные данные:
Одно целое число, факториал исходного числа.

Sample Input:
5

Sample Output:
120


*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int task_10_1_3(void) {

    int a;
    scanf("%d", &a);

    printf("%d", factorial(a));



    return 0;
}

int factorial(int k) {
    // напишите здесь тело функции factorial
    int res = k;

    if (k != 0)
    {
        res *= factorial(k - 1);
    }
    else {
        res = 1;
    }

    return res;

}