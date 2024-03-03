/*
* 
Степени двойки
По заданному N вывести через пробел все (натуральные, т.е. 1,2,3,...)
степени числа 2, для которых 2k≤N.

Входные данные:
Натуральное число NN, причем N<30000.

Выходные данные:
Натуральные числа от 1 до p, такие, что если посчитать 2k,
то получится число не превосходящее N.

Sample Input 1:
128

Sample Output 1:
1 2 3 4 5 6 7

Sample Input 2:
1

Sample Output 2:


*/


#include <stdio.h>
#include <math.h>

int task_7_2_9(void) {
    int a, b;
    int i = 1;
    scanf_s("%i", &a);

    b = pow(2, i);
    while (b <= a)
    {
        printf("%i ", i);
        i++;
        b = pow(2, i);
    }


    return 0;
}