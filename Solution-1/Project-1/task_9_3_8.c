/*
Азбука Морзе.
Написать программу, которая переводила бы строку на английском языке в
морзянку.

Входные данные:
Строка, состоящая из букв латинского алфавита. Длина строки не более 50 
символов.

Выходные данные:
Строка, соответствующая коду Морзе исходной строки. Пробел между словами 
заменить на знак "|:_..._:|". Отдельные символы разделять между собой  "|".


Sample Input:

happy new year

Sample Output:

....|.-|.--.|.--.|-.--||:_..._:|-.|.|.--||:_..._:|-.--|.|.-|.-.|



*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int task_9_3_8(void) {

    char str1[100];
    fgets(str1, 100, stdin);
    
    int i = 0;
    while (str1[i] != '\n') {

        switch (str1[i])
        {
        case ' ': printf("|:_..._:|"); break;
        case 'A':
        case 'a': printf(".-|"); break;
        case 'B':
        case 'b': printf("-...|"); break;
        case 'W':
        case 'w': printf(".--|"); break;
        case 'G':
        case 'g': printf("--.|"); break;
        case 'D':
        case 'd': printf("-..|"); break;
        case 'E':
        case 'e': printf(".|"); break;
        case 'V':
        case 'v': printf("...-|"); break;
        case 'Z':
        case 'z': printf("--..|"); break;
        case 'I':
        case 'i': printf("..|"); break;
        case 'J':
        case 'j': printf(".---|"); break;
        case 'K':
        case 'k': printf("-.-|"); break;
        case 'L':
        case 'l': printf(".-..|"); break;
        case 'M':
        case 'm': printf("--|"); break;
        case 'N':
        case 'n': printf("-.|"); break;
        case 'O':
        case 'o': printf("---|"); break;
        case 'P':
        case 'p': printf(".--.|"); break;
        case 'R':
        case 'r': printf(".-.|"); break;
        case 'S':
        case 's': printf("...|"); break;
        case 'T':
        case 't': printf("-|"); break;
        case 'U':
        case 'u': printf("..-|"); break;
        case 'F':
        case 'f': printf("..-.|"); break;
        case 'H':
        case 'h': printf("....|"); break;
        case 'C':
        case 'c': printf("-.-.|"); break;
        case 'Q':
        case 'q': printf("--.-|"); break;
        case 'Y':
        case 'y': printf("-.--|"); break;
        case 'X':
        case 'x': printf("-..-|"); break;
        }
        i++;
    }


    return 0;
}