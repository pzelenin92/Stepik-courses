/*
Остров сокровищ
Капитан Флинт зарыл клад на Острове сокровищ. Есть описание, как найти клад.

Описание состоит из строк вида: "North 5", где первое слово – одно из "North"
, "South", "East", "West", а второе целое однозначное или двузначное число –
количество шагов, которое необходимо пройти в этом направлении.

Напишите программу, которая по описанию пути к кладу определяет точные 
координаты клада, считая, что начало координат находится в начале пути,
ось OX направлена на восток, ось OY – на север.

Входные данные:
В первой строке натуральное число N. Затем с новой строки N строк 
указанного формата.

Выходные данные:
Вывести координаты клада – два целых числа через пробел. Первое число - 
координата по Х, второе число - координата по Y.

Sample Input:

3
North 2
East 3
South 1

Sample Output:
3 1

*/

int checker(char *a, char *dir) {
    int j = 0;
    int flag = 1;
    while (a[j]!='\0')
    {
        if (a[j] == dir[j]) {
            j++;
        }
        else {
            flag = 0;
                break;
        }
        
    }
    return flag;
}

#define _CRT_SECURE_NO_WARNINGS
#define north "North"
#define south "South"
#define east "East"
#define west "West"

#include <stdio.h>

int task_9_2_7(void) {

    int x = 0, y = 0;

    int n;
    scanf("%d", &n);

    char a[100];
    int steps=0;
    for (int i = 0; i < n; i++) {
        scanf("%s %d", a, &steps);

        if (checker(a,north) ){
            y += steps;
        }
        else if (checker(a, south)) {
            y -= steps;
        }
        else if (checker(a, east)) {
            x += steps;
        }
        else if (checker(a, west)) {
            x -= steps;
        }
    }

    printf("%d %d", x, y);

    return 0;
}