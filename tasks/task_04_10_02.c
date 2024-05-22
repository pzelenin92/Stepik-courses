/*
mirror_seg Отобразить отрезок
*/

#include <stdio.h>

void mirror_seg(int *px1, int *py1, int *px2, int *py2);

int main() {
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    // напишите вызов функции min2time
    mirror_seg(&x1, &y1, &x2, &y2);

    printf("%d %d %d %d\n", x1, y1, x2, y2);

    return 0;
}

void mirror_seg(int *px1, int *py1, int *px2, int *py2) {
    *px1 = *px1;
    *py1 = -*py1;
    *px2 = *px2;
    *py2 = -*py2;
}