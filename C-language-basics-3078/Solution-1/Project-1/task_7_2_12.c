/*

7.2 Цикл с условием

Экспонента с заданной точностью
Вычислить число e=1+1/1!+1/2!+1/3!+1/4!+… с точностью ε.

Входные данные:
Вещественное число ε,(10−9<=ε<=10−1) .

Выходные данные:
Значение числа ee с точностью 8 знаков после запятой. Считать, что
достигнута точность ε, если очередной член последовательности меньше ε, т.е.

1/k<ε


Sample Input 1:
0.1

Sample Output 1:
2.70833333

Sample Input 2:
0.000001

Sample Output 2:
2.71828180


*/


#include <stdio.h>
#include <math.h>

int task_7_2_12(void) {
    double a;
    double e=1.0;
    double more;
    double i = 1, fact = 1;

    scanf_s("%lf", &a);

    do
    {   
        fact = fact * i;
        more = (double)1 / fact;
        e = e + more;
        i++;

    } while (more > a);
    
    printf("%.8lf", e);


    return 0;
}