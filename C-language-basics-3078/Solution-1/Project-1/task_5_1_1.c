﻿/*
Дана длина ребра куба.Необходимо найти площадь одной грани, площадь полной поверхности и объем этого куба.

Входные данные :
xx - длина ребра куба, целое число.

Выходные данные :
Три числа, записанные через пробел.Первое -- площадь грани куба, 
второе -- площадь полной поверхности куба, третье число -- объем куба.

Sample Input:
2

Sample Output:
4 24 8
*/

#include <stdio.h>


int task_5_1_1(void) {
	int a;
	int s1, full_s, full_v;
	scanf_s("%d", &a); // write input

	s1 = a * a;
	full_s = 6 * s1;
	full_v = a * a * a;

	printf("%d %d %d", s1, full_s, full_v);

	return 0;
}