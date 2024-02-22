/*

С начала суток прошло kk секунд. Найти количество секунд, прошедших 
с начала последней минуты.

Входные данные:
Целое число kk -- количество секунд, прошедших с начала суток.

Выходные данные:
Целое число, равное количеству секунд, прошедших с начала последней 
минуты.

Sample Input:
3292

Sample Output:
52

*/

#include <stdio.h>

int task_5_2_10(void) {
	int k;
	int hour, minute;
	int sec_rem_after_hour, sec_rem_after_min;

	scanf_s("%d", &k); // write input

	hour = k / 3600; // hours
	sec_rem_after_hour = k % 3600; // remainder in seconds after hours
	minute = sec_rem_after_hour / 60; // minutes from the remainder = minutes
	sec_rem_after_min = sec_rem_after_hour % 60; // remainder in seconds after minutes = seconds


	printf("%d", sec_rem_after_min);


	return 0;
}