/*

Перевести число из двоичной системы в десятичную. Пример перевода
из двоичной системы счисления в десятичную представлен на картинке.

Входные данные:
Четырёхзначное двоичное число BB.

Выходные данные:
Десятичное целое число, соответствующее двоичному числу BB.

Sample Input 1:
1001

Sample Output 1:
9

Sample Input 2:
1010

Sample Output 2:
10


*/

#include <stdio.h>
#include <math.h>

int task_5_3_5(void) {
	int A;
	int a1, a2, a3, a4;
	int B;

	scanf_s("%d", &A); // write input

	a1 = A % 10; // first number (from right)
	a2 = (A % 100) / 10; //second
	a3 = (A / 100) % 10; //third
	a4 = A / 1000; // fourth

	B = a1 * pow(2, 0) + a2 * pow(2, 1) + a3 * pow(2, 2) + a4 * pow(2, 3);

	printf("%d", B);

	return 0;
}