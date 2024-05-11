/*

Шифр Цезаря.
Написать функцию void char_cesar(char * ch, int shift), которая
изменяет переданный ей символ ch по алгоритму Цезаря с ключом shift.

Шифр Цезаря заключается в замене текущего символа на тот, который 
находится в алфавите на k позиций правее. Например, буква a при сдвиге
2 будет заменена на букву c, буква x при сдвиге 4 будет заменена
на букву b, т.к. мы считаем алфавит зацикленным.

Sample Input 1:
a 2

Sample Output 1:
c

Sample Input 2:
x 4

Sample Output 2:
b

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void char_cesar(char* ch, int shift);


int task_10_3_5(void) {

    char ch;
    int k;
    scanf("%c %d", &ch, &k);

    char_cesar(&ch, k);

    printf("%c", ch);

    return 0;
}

void char_cesar(char* ch, int shift) {
    
    if (*ch >= 'a' && *ch <= 'z') {
        *ch -= 97;
        *ch = (*ch + shift) % 26;
        *ch += 97;
    }

    else if (*ch >= 'A' && *ch <= 'Z') {
        *ch -= 65;
        *ch = (*ch + shift) % 26;
        *ch += 65;
    }

}

