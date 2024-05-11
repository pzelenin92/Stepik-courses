/*
Палиндром
Определить является ли массив палиндромом, т.е. первый элемент равен
последнему, второй предпоследнему и т.д.

Входные данные:
Первая строка число N,(N>0) -- длина массива. Длина массива
не более 100 элементов. Вторая строка N  целых чисел, записанных через
пробел

Выходные данные:
YES -- если массив является палиндромом, NO -- в противном случае.

Sample Input 1:
5
 10 -93 22 75 12

Sample Output 1:
NO

Sample Input 2:
5
 1 2 3 2 1

Sample Output 2:
YES

Sample Input 3:
5
 1 2 3 4 1

Sample Output 3:
NO



*/


#include <stdio.h>


int task_8_1_2(void) {
    int a, b;
    int c = 1;

    scanf_s("%d", &a);
    int arr[100] = { 0 };

    for (int i = 0; i < a; i++)
    {
        scanf_s("%d", &b);
        arr[i] = b;
    }

    for (int i = 0; a-i>=i; i++)
    {
        if (arr[i] != arr[a - 1 -i])
        {
            c = 0;
        }
        
    }
    
    if (c == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    

    return 0;
}