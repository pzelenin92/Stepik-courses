/*

Одноклеточная амёба каждые 3 часа делится на 2 клетки.
Определить, сколько клеток будет через k часов

Входные данные:
Одно целое число k

Выходные данные:
Целое число, равное количеству клеток амёбы через k часов.

Sample Input:
36

Sample Output:
4096

*/

#include <stdio.h>
#include <math.h>

int task_5_3_1(void) {
	int k;
	int steps, cells;

	scanf_s("%d", &k); // write input

	steps = k / 3;
	cells = pow(2, steps);

	printf("%d", cells);

	return 0;
}