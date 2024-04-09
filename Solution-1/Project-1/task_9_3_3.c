/*
Города
Определить можно ли из указанных слов составить цепочку для игры в "Города".
Т.е. либо первая буква второго слова совпадает с последней буквой первого
слова, либо наоборот. Названия городов, как и полагается, записаны с
заглавной буквы.

Входные данные:
Две символьных строки, записанные каждая с новой строки.  Длина строк не
более 50 символов.

Выходные данные:
yes -- если из указанных слов можно составить цепочку для игры в "Города",
no -- в противном случае.

Sample Input 1:
Vologda
Astana

Sample Output 1:
yes

Sample Input 2:
Omsk
Karaganda

Sample Output 2:
yes

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int task_9_3_3(void) {

    char str1[100];
    scanf("%s", str1);
    str1[0] += 32;


    char str2[100];
    scanf("%s", str2);
    str2[0] += 32;

    if (str1[0] == str2[strlen(str2)-1] || str2[0] == str1[strlen(str1)-1]) {
        printf("yes");
    }
    else {
        printf("no");
    }
    

    return 0;
}