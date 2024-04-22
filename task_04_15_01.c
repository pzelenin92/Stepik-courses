/*
half Делим конфеты пополам
*/

#include <stdio.h>

int delim_konfety(int a);

int main() {
    int x;
    scanf("%d", &x);

    int res = delim_konfety(x);

    printf("%d\n", res);

    return 0;
}

int delim_konfety(int a) {
    int res = 1;
    if (a != 1) {
        // printf("a = %d\n", a);
        res += delim_konfety(a - a / 2);
    }
    // printf("res = %d\n", res);
    return res;
}