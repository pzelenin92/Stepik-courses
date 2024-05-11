/*

Последовательные множители.
Напишите функцию с именем sequence_multipliers, 
принимающую один аргумент xx, которая определяет можно ли представить xx в виде произведения трех последовательных натуральных чисел. Например, 120=4⋅5⋅6120=4⋅5⋅6

Входные данные:
Одно натуральное число N,(N<1000000)

Выходные данные:
kk -- первое число последовательности трёх натуральных чисел такое, 
что k(k+1)(k+2)=xk(k+1)(k+2)=x, либо -1, если число xx нельзя 
представить в таком виде.

Sample Input 1:
120

Sample Output 1
4

Sample Input 2:
9

Sample Output 2:
-1

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int task_10_1_5(void) {

    int n;
    scanf("%d", &n);

    printf("%d", sequence_multipliers(n));

    return 0;
}

int sequence_multipliers(int n) {
    int res=-1;
    int mult = 0;
    int i = 0;
    while (mult <= n) {
   
        if (mult == n) {
            res = i;
        }
        i++;
        mult = i * (i + 1) * (i + 2);
    }

    return res;
}