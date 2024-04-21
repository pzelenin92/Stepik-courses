/*
rotateC Поворот вокруг центра
*/

#include <stdio.h>

void rotateC(int *x1, int *y1, int *x2, int *y2);
void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc);

int main()
{
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    rotateC(&x1, &y1, &x2, &y2);

    printf("%d %d %d %d\n", x1, y1, x2, y2);

    return 0;
}

void rotateC(int *x1, int *y1, int *x2, int *y2)
{
    // координаты центра
    int xc = 0;
    int yc = 0;
    center(*x1, *y1, *x2, *y2, &xc, &yc);

    // смещаем в начало координат
    *x1 -= xc;
    *x2 -= xc;
    *y1 -= yc;
    *y2 -= yc;

    // находим новые значения точек
    int tmp = *x1;
    *x1 = -*y1;
    *y1 = -tmp;

    tmp = *x2;
    *x2 = -*y2;
    *y2 = -tmp;

    // возвращем смещение обратно
    *x1 += xc;
    *x2 += xc;
    *y1 += yc;
    *y2 += yc;
}

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc)
{
    *pxc = (xlt + xrb) / 2;
    *pyc = (ylt + yrb) / 2;
}