#include <stdio.h>

int main() {
    float a, b, c;
    float res;

    scanf("%f %f %f", &a, &b, &c);

    res = (a / b) / c;

    printf("%.0f\n", res);

    return 0;
}