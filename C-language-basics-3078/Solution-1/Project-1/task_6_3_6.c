﻿/*
* 
Кнопочный механический кодовый замок имеет десять кнопок. 
Каждая из кнопок имеет свой порядковый номер от 0 до 9. 
Правильный код зашит внутрь замка и состоит из трёх цифр 2,4,8. 
Человек, который хочет открыть дверь, должен последовательно нажать 
и удерживать эти три кнопки в любом порядке.
Например, сначала зажать 2, потом, не отпуская двойку, нажать 4, 
потом нажать 8, не отпуская предыдущих двух кнопок. Порядок мог бы 
быть другим. Например, 4->2->8 тоже бы сработало.
Напишите программу, моделирующую работу такого замка.

Входные данные:
Три целых числа b1,b2,b3 -- номера кнопок, которые нажал человек.

Выходные данные:
Строка open, если введён правильный код. Строка closed, если 
введён неправильный код.

Sample Input:
2 8 4

Sample Output:
open

*/


#include <stdio.h>
#include <math.h>

int task_6_3_6(void) {
    int a1, a2, a3;

    scanf_s("%i %i %i", &a1, &a2, &a3);


    if (a1 == 4 || a1 == 2 || a1 == 8) {
        if ((a2 == 4 || a2 == 2 || a2 == 8) && (a2 != a1)) {
            if ((a3 == 4 || a3 == 2 || a3 == 8) && (a3 != a1) && (a3 != a2)) {
                printf("open");
            }
            else
            {
                printf("closed");
            }
        }
        else
        {
            printf("closed");
        }
    }
    else
    {
        printf("closed");
    }


    return 0;
}