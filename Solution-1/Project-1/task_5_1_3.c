/*
Идёт k секунда суток. Определить, сколько целых часов и целых минут будут
показывать электронные часы, если на 0-ой секунде они показывают 0 0.

Sample Input:
34961

Sample Output:
9 42
*/

#include <stdio.h>


int task_5_1_3(void) {
	int k;
	int hour, minute;
	int sec_rem_after_hour, sec_rem_after_min;

	scanf_s("%d", &k); // write input

	hour = k / 3600; // hours
	sec_rem_after_hour = k % 3600; // remainder in seconds after hours
	minute = sec_rem_after_hour / 60; // minutes from the remainder = minutes
	sec_rem_after_min = sec_rem_after_hour % 60; // remainder in seconds after minutes = seconds

	//printf("hour=%d \nsec_rem_after_hour=%d \n", hour, sec_rem_after_hour);
	//printf("minute=%d \nsec_rem_after_min=%d \n", minute, sec_rem_after_min);

	printf("%d %d", hour, minute);

	return 0;
}