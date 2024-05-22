/*
В месяце n дней. Первый понедельник наступил в день day.
Сколько в этом месяце понедельников?

Sampl Input:
30 4

Sample Output:
4
*/

#include <stdio.h>

int main() {
    int n, day, res;

    scanf("%d %d", &n, &day);

    int whole_weeks = n / 7;

    res = whole_weeks + (n % 7 >= day);

    printf("%d\n", res);

    return 0;
}