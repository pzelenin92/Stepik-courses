/*
nod Алгоритм Евклида
*/

#include <stdio.h>

int nod(int a, int b);

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    int res = nod(a, b);

    printf("%d\n", res);

    return 0;
}

int nod(int a, int b) {
    int res = a;
    if (b != 0) {
        res = nod(b, a % b);
    }
    return res;
}