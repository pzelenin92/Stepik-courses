/*

Степень двойки
По данном числу NN определить, является ли оно степенью числа 22.

Входные данные:
Одно целое неотрицательное число NN.

Выходные данные:
YES -- если число NN является степенью двойки, и NO в противном случае.

Sample Input 1:
128

Sample Output 1:
YES

Sample Input 2:
6

Sample Output 2:
NO

0: 2^0 = 1 - NO
1: 2^1 = 2 - YES
2: 2^2 = 4 - YES
...

*/


#include <stdio.h>
#include <math.h>

int task_7_2_7(void) {
    int a,b;
    int i = 0;
    int flag = 0;
    scanf_s("%i", &a);
    b = pow(2, i);

    if (a != 0)
    {
        while (b <= a)
        {
            if (b == a)
            {
                flag = 1;
            }
            i++;
            b = pow(2, i);
        }
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}