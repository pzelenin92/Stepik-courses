/*
следующая клетка

В записи шахматных партий клетки шахматной доски кодируются буквой и цифрой. Буква означает номер столбца, цифра - номер
ряда.

Напечатать, координаты клетки на один ряд выше.

Будут даны клетки из рядов с 1 по 7.
*/

#include <stdio.h>

int main() {
    char c;
    int d;

    // читаем символы
    scanf("%c%d", &c, &d);

    // печатаем символы
    printf("%c%d\n", c, (d + 1));

    return 0;
}