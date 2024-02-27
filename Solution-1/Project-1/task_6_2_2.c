/*

Квадранты
На координатной плоскости Oxy​ задана точка A(x,y). 
Необходимо указать квадрант, в котором она расположена. Номера 
квадрантов представлены на рисунке ниже.

|(-,+)=2й|(+,+)=1|
|(-,-)=3й|(+,-)=4|

Входные данные:
Два вещественных числа x, y, которые не равны нулю.

Выходные данные:
Вывести одно целое -- номер квадранта.

Sample Input:
2 -4

Sample Output:
4

*/

#include <stdio.h>

int task_6_2_2(void) {
    float x,y;
    int res;

    scanf_s("%f %f", &x, &y);

    res = x * y;

    switch (res > 0) {
    case 1 : 
        switch (x > 0) {
        case 1: printf("%i",1); break;
        case 0 :printf("%i", 3); break;
        }; break;
    case 0:
        switch (x > 0) {
        case 1: printf("%i", 4); break;
        case 0: printf("%i", 2); break;
        }; break;
    }

    return 0;
}