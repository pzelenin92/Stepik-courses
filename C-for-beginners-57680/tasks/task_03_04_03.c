#include <stdio.h>

int main() {
    float m, res;
    float h;

    scanf("%f %f", &m, &h);

    res = m / (h * h);

    printf("%f\n", res);

    return 0;
}