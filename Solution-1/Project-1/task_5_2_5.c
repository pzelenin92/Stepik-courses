﻿/*


Результатом операции десятичного сдвига вправо для целого числа 127
будет число 1212. Написать программу, которая осуществляет операцию
десятичного сдвига вправо для целого трёхзначного числа kk.

Входные данные:
Целое трёхзначное число k.

Выходные данные:
Число, полученное из числа k десятичным сдвигом вправо.

Sample Input:
850

Sample Output:
85

*/

#include <stdio.h>

int task_5_2_5(void) {
	int k;
	int out;

	scanf_s("%i", &k);

	out = k / 10;

	printf("%i", out);

	return 0;
}