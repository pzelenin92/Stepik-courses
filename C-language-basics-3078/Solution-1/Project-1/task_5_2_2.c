/*


Определить, является ли целое число чётным или нечётным.

Входные данные:
Одно целое число k. (−100≤k≤100)(−100≤k≤100)

Выходные данные:
Число 11, если kk -- чётное, и −1−1, если kk -- нечётное.

Sample Input 1:
2

Sample Output 1:
1

Sample Input 2:
-2

Sample Output 2:
1


*/

#include <stdio.h>
#include <math.h>

int task_5_2_2(void) {
	int k;
	int out;

	scanf_s("%i", &k);

	out = ((k * k) + 1) % 2 - (k * k) % 2;

	printf("%i", out);

	return 0;
}