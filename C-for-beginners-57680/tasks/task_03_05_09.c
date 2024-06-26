/*
skg_2 Кошелек - сложение

У магов свои деньги. В магической Великобритании это кнаты (knut),
 сикли (sickle) и галеоны (galleon)

    1 галеон = 17 сиклей

    1 сикль = 29 кнатов

    В одном кошельке g1 галеонов, s1 сиклей и k1 кнатов.
    В другом кошельке g2 галеонов, s2 сиклей и k2 кнатов.
    Сколько всего денег в кошельках? Представьте эту сумму, используя минимальное количество монет.

Входные данные

Через пробел g1 s1 k1 на одной строке. Через пробел g2 s2 k2
на следующей строке.
Выходные данные

Через пробел вычисленное количество галеонов, сиклей и кнатов.
Тестовые данные

Sample Input:
1 20 5
10 1 25

Sample Output:
12 5 1
*/

#include <stdio.h>

int main() {
    int g1, s1, k1;
    int g2, s2, k2;
    scanf("%d %d %d%d %d %d", &g1, &s1, &k1, &g2, &s2, &k2);

    int g3 = g1 + g2;
    int s3 = s1 + s2;
    int k3 = k1 + k2;

    int all_k = g3 * 17 * 29 + s3 * 29 + k3;

    g3 = all_k / (17 * 29);
    s3 = (all_k % (17 * 29)) / 29;
    k3 = (all_k % (17 * 29)) % 29;

    printf("%d %d %d\n", g3, s3, k3);

    return 0;
}