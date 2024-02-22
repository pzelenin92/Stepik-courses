﻿/*

Результатом операции «циклический сдвиг влево» (на десятичный разряд)
для целого числа 127 будет число 271. Написать программу, которая
осуществляет операцию «циклический сдвиг влево» для целого трёхзначного
числа kk.

Входные данные:
Целое трёхзначное число kk.

Выходные данные:
Число, полученное из числа kk циклическим сдвигом влево.

Sample Input 1:
127

Sample Output 1:
271

Sample Input 2:
100

Sample Output 2:
1


*/

#include <stdio.h>

int task_5_2_8(void) {
	int k;
	int rem, whole;
	int out;

	scanf_s("%i", &k);

	rem = k % 100;
	whole = k / 100;

	out = rem * 10 + whole;

	printf("%i", out);

	return 0;
}