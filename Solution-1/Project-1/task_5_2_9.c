/*

С начала суток прошло k секунд. Найти количество секунд прошедших с
начала последнего часа.

Входные данные:
Целое число k -- количество секунд прошедших с начала суток.

Выходные данные:
Целое число, равное количеству секунд прошедших с начала последнего часа.


Sample Input:
32792

Sample Output:
392



*/

#include <stdio.h>

int task_5_2_9(void) {
	int k;
	int sec_rem_after_hour;

	scanf_s("%d", &k); // write input

	sec_rem_after_hour = k % 3600; // remainder in seconds after hours

	printf("%d", sec_rem_after_hour);


	return 0;
}