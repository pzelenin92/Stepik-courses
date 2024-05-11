/*

Перевёртыш
Напишите программу, которая по данному натуральному N печатает его цифры 
в обратном порядке.

Входные данные:
Одно натуральное число N.

Выходные данные:
Цифры числа N, записанные в обратном порядке.

Sample Input 1:
12938

Sample Output 1:
83921

Sample Input 2:
720

Sample Output 2:
027

Sample Input 3:
1

Sample Output 3:
1



*/


#include <stdio.h>
#include <math.h>

int task_7_2_11(void) {
    int a,b;
    int i = 10;
    scanf_s("%i", &a);

 
    printf("%i", a % i);

    b = a / i;

    while (b != 0)
    {   
        i *= 10;
        printf("%i", (a % i) /(i/10));
        b = a / i;
    }


    return 0;
}