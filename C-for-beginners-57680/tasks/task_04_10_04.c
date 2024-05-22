/*
center Центр прямоугольника
*/

#include <stdio.h>

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc);

int main() {
    int x1, y1, x2, y2;
    int xc, yc;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    center(x1, y1, x2, y2, &xc, &yc);

    printf("%d %d\n", xc, yc);

    return 0;
}

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc) {
    *pxc = (xlt + xrb) / 2;
    *pyc = (ylt + yrb) / 2;
}