/*
Возведение в натуральную степень.
*/

#include <stdio.h>

long long int ipow(long long int a, unsigned int n, unsigned int* depth);

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    unsigned int depth = 7;
    long long int res = ipow(a, b, &depth);
    printf("%lld %u\n", res, depth);

    scanf("%d%d", &a, &b);
    res = ipow(a, b, &depth);
    printf("%lld %u\n", res, depth);

    return 0;
}

long long int ipow(long long int a, unsigned int n, unsigned int* depth) {
    *depth = 0;
    long long int res;
    if (n == 0) {
        res = 1;
    } else if (n == 1) {
        res = a;
    } else if (n % 2 == 0) {
        res = ipow(a, n / 2, depth);
        res = res * res;
    } else if (n % 2 == 1) {
        res = a * ipow(a, n - 1, depth);
    }

    *depth += 1;
    return res;
}