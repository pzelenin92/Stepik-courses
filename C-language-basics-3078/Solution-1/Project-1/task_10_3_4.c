/*



Написать функцию void char_register(char * ch, int fl), которая 
переводит переданный ей символ ch (символ латинского алфавита) в
заданный переменной fl регистр: 0 — нижний, 1 — верхний.

Если переданное в переменной ch значение не является символом 
латинского алфавита или уже находится в нужном регистре, то делать с 
ним ничего не нужно.

Преобразованный символ необходимо поместить по тому же указателю, по
которому он был считан.

Sample Input:
y 1

Sample Output:
Y


*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void char_register(char* ch, int fl);


int task_10_3_4(void) {

    char ch;
    int k;
    scanf("%c %d", &ch, &k);

    char_register(&ch, k);

    printf("%c", ch);

    return 0;
}

void char_register(char* ch, int fl) {
    if ((*ch >= 'a' && *ch <= 'z') && fl == 1) {
        *ch -= 32;
    }

    else if ((*ch >= 'A' && *ch <= 'Z') && fl == 0) {
            *ch += 32;
        }
    
}

