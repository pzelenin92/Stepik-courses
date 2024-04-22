/*
6ticket Печать номера билета наоборот
*/
#include <stdio.h>

void print_revers(int x);

int main() {
    int x;

    scanf("%d", &x);

    print_revers(x);

    return 0;
}

void print_revers(int x) {
    int ost = 0;
    while (x != 0) {
        ost = x % 10;
        x /= 10;
        printf("%d", ost);
    }
}
