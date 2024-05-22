/*
rusMult Русский крестьянский способ деления
*/

#include <stdio.h>
int rusDel(int a, int b);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int res = rusDel(a, b);
    printf("%d", res);
    return 0;
}

int rusDel(int a, int b) {
    int mult, rem, new_a, prev_res;
    int res = 1;

    if (a >= 1) {
        if (a % 2 == 0) {
            new_a = a / 2;
            mult = 2;
            rem = 0;
            if (new_a != 0) {
                printf("%d %d %d\n", new_a, mult, rem);
            }

            prev_res = rusDel(new_a, b);

        } else if (a % 2 != 0) {
            if (a - b != 0) {
                new_a = a - b;
                mult = 1;
                rem = 1;
                if (new_a != 0) {
                    printf("%d %d %d\n", new_a, mult, rem);
                }
                prev_res = rusDel(new_a, b);
            } else {
                printf("%d\n", res);
            }
        }
        if (a - b != 0) {
            res = prev_res * mult + rem;
            printf("%d * %d + %d = %d\n", prev_res, mult, rem, res);
        }
    }

    return res;
}