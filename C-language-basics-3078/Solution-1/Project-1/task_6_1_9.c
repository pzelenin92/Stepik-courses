/*
Для целого числа KK (от 1 до 99 включительно) напечатать фразу
«Мне K лет», учитывая при этом, что при некоторых значениях K
слово «лет» надо заменить на слово «год» или «года». Например,
11 лет, 22 года, 51 год.

Входные данные: Одно целое число KK, 1≤k≤991≤k≤99

Выходные данные: Фраза с правильным окончанием

Sample Input:
11

Sample Output:
Мне 11 лет


*/

#include <stdio.h>
#include <locale.h>

int task_6_1_9(void) {
    setlocale(LC_ALL, "Russian"); // для использования кириллицы
    int k;

    scanf_s("%i", &k);

    switch (k%10) {

    case 1:
        switch (k / 10) {
        case 0:
        case 2 :
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9: printf("Мне %i год", k); break;
        case 1: printf("Мне %i лет", k); break;
        }; break;
        
    case 2:
    case 3:
    case 4:
        switch (k / 10) {
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:printf("Мне %i года", k); break;
        case 1: printf("Мне %i лет", k); break;
        }; break;

    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0: printf("Мне %i лет", k); break;

    }

    return 0;
}