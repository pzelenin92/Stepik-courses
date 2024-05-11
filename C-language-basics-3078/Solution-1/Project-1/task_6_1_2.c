/*
Написать программу, позволяющую получить словесное описание школьных
отметок (1 — «плохо», 2 — «неудовлетворительно», 
3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).

Входные данные: Одно целое число k от 1 до 5.

Выходные данные:
Соответствующая kk текстовое описание отметки.

Sample Input:
3

Sample Output:
удовлетворительно

*/

#include <stdio.h>
#include <locale.h>

int task_6_1_2(void) {
    //setlocale(LC_ALL, "Russian"); // для использования кириллицы
    int s;
    scanf_s("%i", &s); 

    switch (s) {

    case 1: printf("плохо\n"); break;
    case 2: printf("неудовлетворительно\n"); break;
    case 3: printf("удовлетворительно\n"); break;
    case 4: printf("хорошо\n"); break;
    case 5: printf("отлично\n"); break;

    }

    return 0;
}