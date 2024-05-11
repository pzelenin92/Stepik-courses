/*


Написать функцию void sum_digits(int * x), которая заменяет число x 
на сумму цифр из которых состоит число x.

Sample Input 1:

12938

Sample Output 1:

23

Sample Input 2:

722

Sample Output 2:

11

Sample Input 3:

1

Sample Output 3:

1



*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void sum_digits(int* x);


int task_10_3_2(void) {

    int n;
    scanf("%d", &n);

    sum_digits(&n);

    printf("%d", n);

    return 0;
}

void sum_digits(int *x) {
    int sum = 0;
    int tmp_x = *x;

    while (tmp_x != 0) {

        sum += tmp_x % 10;
        tmp_x /= 10;
        
    }
    *x = sum;

}