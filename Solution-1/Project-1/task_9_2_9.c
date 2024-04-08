/*
Форматированный вывод числа.
Написать программу, реализующую вывод числа N с разделением на триады цифр.

Входные данные:
Целое положительное число N.(0<N<107)

Выходные данные:
Вывести введённое число, отформатированное соответствующим образом. 
Лишние пробелы в конце и начале строки считаются ошибкой.

Примечание: ﻿число, имеющее при себе один или два разряда, вывести без изменений.

Sample Input:
1235521

Sample Output:
1 235 521

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int task_9_2_9(void) {

    char a[100];
    scanf("%s", a);


    int counter = 0;
    while (a[counter] != '\0') {
        counter++;

    }

    int first_numbers;
    int j = 0;
    while (counter > 0)
    {
        first_numbers = counter % 3;
        if (first_numbers != 0) {
            while (j < first_numbers)
            {
                printf("%c", a[j]);
                j++;
                counter --;
            }
            if (counter != 0) {
                printf(" ");
            }
        }
        else {
            for (int k = 0; k < 3; k++)
            {
                printf("%c", a[j]);
                j++;
                counter--;
            }
            if (counter != 0) {
                printf(" ");
            }
        }
    }
     

    return 0;
}