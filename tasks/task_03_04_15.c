#include <stdio.h>

int main() {
    int v;
    float res;

    scanf("%d", &v);

    res = (float)v * 1000 / 3600;

    printf("%f\n", res);

    return 0;
}