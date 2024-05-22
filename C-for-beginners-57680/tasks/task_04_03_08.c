/*
Перевод из градусов Цельсия в градусы Фаренгейта
*/

#include <stdio.h>

float celsius(int fahr);

int main() {
    int fahr;
    float c;

    scanf("%d", &fahr);
    c = celsius(fahr);
    printf("%.4f\n", c);

    return 0;
}

float celsius(int fahr) { return ((float)fahr - 32) * 5 / 9; }