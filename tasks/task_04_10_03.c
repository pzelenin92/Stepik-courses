/*
move Сдвиг точки
*/

#include <stdio.h>

void move(int *px, int *py, int dx, int dy);

int main() {
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    // напишите вызов функции min2time
    move(&x1, &y1, x2, y2);

    printf("%d %d\n", x1, y1);

    return 0;
}

void move(int *px, int *py, int dx, int dy) {
    *px = *px + dx;
    *py = *py + dy;
}