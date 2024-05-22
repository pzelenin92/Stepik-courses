/*
rusMult Русский крестьянский способ умножения
*/

#include <stdio.h>
int rusMult(int a, int b);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int res = rusMult(a, b);
    printf("%d", res);
    return 0;
}

int rusMult(int a, int b) {
    int new_res = a;
    printf("%d %d\n", a, b);

    if (b > 1) {
        int res_rus_mult = rusMult(a * 2, b / 2);
        new_res = res_rus_mult;

        if (b % 2 == 1) {
            new_res = a + res_rus_mult;
        }

        printf("%d %d %d %d\n", res_rus_mult, a, b % 2, new_res);
    }

    if (b == 1) {
        printf("%d\n", new_res);
    }

    return new_res;
}