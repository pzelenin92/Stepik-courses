/*
Побитовая инверсия
Напишите программу, которая осуществляет инверсию однобитного числа (0 или 1).

Входные данные:
Число K либо 0, либо 1.

Выходные данные:
Вывести 11, если K=0K=0
вывести 00, если K=1K=1

Sample Input 1:
0

Sample Output 1:
1

Sample Input 2:
1

Sample Output 2:
0

*/

#include <stdio.h>

int task_5_1_10(void) {
	int A;
	int out;

	scanf_s("%i", &A);

	out = (A - 1) * (-1);

	printf("%i", out);

	return 0;
}