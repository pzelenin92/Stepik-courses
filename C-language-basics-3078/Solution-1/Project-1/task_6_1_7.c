/*
Вычислить номер дня в невисокосном году по заданным числу и месяцу.

Входные данные:
Два целых числа. Первое число mm -- номер месяца. 1≤m≤12
Второе число d -- номер дня в месяце. 1≤d≤31

Выходные данные:
Одно целое число -- порядковый номер дня в невисокосном году.

Sample Input 1:
2 4

Sample Output 1:
35

Sampl Input 2:
6 12

Sample Output 2:
163

*/

#include <stdio.h>

int task_6_1_7(void) {
    int m, d;
    int J=31, F=28, M=31, A=30, Ma=31, Ju=30, Jl=31, Au=31, S=30, O=31, N=30, D=31;
    int out;

    scanf_s("%i %i", &m, &d);

    switch (m) {

    case 1: out = d; break;
    case 2: out = J + d; break;
    case 3: out = J + F + d; break;
    case 4: out = J + F + M + d; break;
    case 5: out = J + F + M + A + d; break;
    case 6: out = J + F + M + A + Ma + d; break;
    case 7: out = J + F + M + A + Ma + Ju + d; break;
    case 8: out = J + F + M + A + Ma + Ju + Jl+ d; break;
    case 9: out = J + F + M + A + Ma + Ju + Jl + Au + d; break;
    case 10: out = J + F + M + A + Ma + Ju + Jl + Au + S+ d; break;
    case 11: out = J + F + M + A + Ma + Ju + Jl + Au + S + O + d; break;
    case 12: out = J + F + M + A + Ma + Ju + Jl + Au + S + O + N + d; break;

    }

    printf("%i", out);

    return 0;
}