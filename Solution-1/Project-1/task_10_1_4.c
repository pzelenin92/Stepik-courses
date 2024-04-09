/*

Число сочетаний.
Допустим, у вас имеется NN хоккеистов. Из них нужно сформировать команду из K
человек. Сколько существует вариантов это сделать? На подобные вопросы существует
стандартный ответ -- число сочетаний, которое вычисляется по следующей формуле:

Сnk=n!k!(n−k)!
Сnk​=k!(n−k)!n!​ Например, N=5,K=3N=5,K=3, то
С53=5!3!(2)!=1206⋅2=10
С53​=3!(2)!5!​=6⋅2120​=10

Входные данные:
Натуральное число NN и целое неотрицательное число K,(K≤N),N≤12K,(K≤N),N≤12.

Выходные данные:
Одно число - количество сочетаний хоккеистов.

Sample Input 1:
3 1

Sample Output 1:
3

Sample Input 2:
3 0

Sample Output 2:
1

Sample Input 3:
4 2

Sample Output 3:
6

*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int task_10_1_4(void) {

    int n = 0, k = 0;
    scanf("%d%d", &n, &k);

    printf("%d", combin(n, k));



    return 0;
}

int combin(int n, int k) {
    
    int res = factorial2(n) / (factorial2(k) * factorial2(n - k));

    return res;
}

int factorial2(int k) {
    // напишите здесь тело функции factorial
    int res = k;

    if (k != 0)
    {
        res *= factorial2(k - 1);
    }
    else {
        res = 1;
    }

    return res;

}