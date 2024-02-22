/*
Определить является ли число чётным или нечётным.

Входные данные:
Одно целое неотрицательное число kk. (0≤k≤100)(0≤k≤100)

Выходные данные:
Число 11, если kk -- чётное и −1−1, если kk -- нечётное.

Sample Input 1:
91

Samle Output 1:
-1

Sample Input 2:
0

Sample Output 2:
1


*/

#include <stdio.h>
#include <math.h>

int task_5_2_1(void) {
	int k;
	int out;

	scanf_s("%i", &k);
	
	//out = pow(-1,k); // 1й вариант
	out = (((k % 2) - 2) * -2) - 3; // 2й вариант

	printf("%i", out);

	return 0;
}