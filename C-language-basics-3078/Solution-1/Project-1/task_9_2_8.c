/*

Комментарии
Скрыть из вывода часть символьной строки, заключенную между
последовательностями символов \/* и *\/
Входные данные :
Строка символов, содержащая не более одной последовательности символов 
вида \/* ... *\/.  В строке могут содержаться непарные 
символы* / и /*, их удалять не нужно. Длина строки не превышает 
100 символов без учёта символа перевода строки и нуль символа.

Выходные данные:
Вывести исходную строку, преобразованную указанным способом.

Справка:

Комментарий всегда располагается от первой попавшейся \/* и до первой 
попавшейся *\/

Тестовые данные

Sample Input 1:
Young/* cut it *\/Coder.ru

Sample Output 1 :
    YoungCoder.ru

 Sample Input 2 :
    *\/ Young\/* cut it *\/Coder.ru
    * 
 Sample Output 2 :
 *\/ YoungCoder.ru

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int task_9_2_8(void) {

    char a[110];
    char b[110];

    fgets(a, 110, stdin);
    
    int i = 0;
    int j = 0;
    int ind_left=-1;
    int ind_right=-1;
    while (a[i] != '\0')
    {
        if (a[i] == '/' && a[i + 1] == '*' && ind_left == -1) {
            ind_left = i;
            i++;

        }
        else if (a[i] == '*' && a[i + 1] == '/' && ind_left != -1 && ind_right == -1) {
            ind_right = i;
            

        }
        i++;
        
    }


    if (ind_left != -1 && ind_right != -1) {
        i = 0, j = 0;
        while (i < ind_left)
        {
            b[j] = a[i];
            i++;
            j++;
       
        }

        i = ind_right + 2;
        while (a[i] != '\0')
        {
            b[j] = a[i];
            i++;
            j++;

        }

        printf("%s", b);

    }
    else {
        printf("%s", a);
    }

    return 0;
}