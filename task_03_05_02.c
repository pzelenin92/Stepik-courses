#include <stdio.h>

int main() {
    int round, total;
    int res1, res2;

    scanf("%d %d", &round, &total);

    res1 = total / round;
    res2 = total % round;

    printf("%d %d\n", res1, res2);

    return 0;
}