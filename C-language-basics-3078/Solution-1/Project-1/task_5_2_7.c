﻿/*

Результатом операции циклического сдвига вправо на десятичный разряд
для целого числа 127127 будет число 712712. Написать программу, которая
осуществляет операцию циклического сдвига вправо для целого трёхзначного
числа kk.

Входные данные:
Целое трёхзначное число kk.

Выходные данные:
Число, полученное из числа kk циклическим сдвигом вправо.

Sample Input 1:
127

Sample Output 1:
712

Sample Input 2:
100

Sample Output 2:
10

*/

#include <stdio.h>

int task_5_2_7(void) {
	int k;
	int rem, whole;
	int out;

	scanf_s("%i", &k);

	rem = k % 10;
	whole = k / 10;

	out = rem * 100 + whole;

	printf("%i", out);

	return 0;
}