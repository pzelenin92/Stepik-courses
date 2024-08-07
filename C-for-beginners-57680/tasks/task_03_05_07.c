/*
float_int_run Бегуны

Два бегуна бегают по круговой гаревой дорожке. Тренировку они начали одновременно.

Первый бегун пробежал всего 0<n<1000 кругов.

Первый бегун бежит со скоростью v, второй со скоростью kv,
где 0<k≤1

Сколько раз бегуны встретились за время тренировки на дорожке?

Дано: целое число n (количество кругов, которые пробежал первый бегун) и, через пробел, дробное число k (отношение
скорости первого бегуна к скорости второго бегуна).

Найти: целое число - количество встреч.
Тестовые данные

Sample Input:
2 0.5

Sample Output:
1
*/

#include <stdio.h>

int main() {
    int n;
    float k;

    scanf("%d %f", &n, &k);

    int v1 = 1;
    float v2 = k * v1;

    int t1 = n / v1;
    float n2 = t1 * v2;

    int res = n - n2;

    printf("%d\n", res);

    return 0;
}