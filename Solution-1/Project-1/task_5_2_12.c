/*

Идёт k день года. Определить номер текущей недели в году. 
Предполагаем, что 1 января выпало на пятницу.

Входные данные:
Целое число k, 1≤k≤365

Выходные данные:
Одно целое число -- номер недели.

Sample Input 1:
3

Sample Output 1:
1

Sample Input 2:
12

Sample Output 2:
3


*/

#include <stdio.h>

int task_5_2_12(void) {
	int k;
	int week;

	scanf_s("%d", &k); // write input

	week = ((k + 4 - 1) / 7) + 1;

	printf("%d", week);


	return 0;
}