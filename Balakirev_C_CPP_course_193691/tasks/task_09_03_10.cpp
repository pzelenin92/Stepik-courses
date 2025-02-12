/*Подвиг 8 (с повторением). Объявите функцию со следующей сигнатурой:

double triangle_sq(int a, int b, int c);

которая вычисляет и возвращает площадь треугольника со сторонами a, b, c. Площадь вычисляется по формуле Герона:

S=p⋅(p−a)⋅(p−b)⋅(p−c)


где p=(a+b+c)/2p=(a+b+c)/2 - полупериметр треугольника.

В функции main прочитайте из входного потока три целых натуральных числа, записанных в одну строчку через пробел.
Вызовите для них функцию triangle_sq и выведите в консоль значение площади с точностью до сотых.

P. S. Чтение данных из потока stdin выполнить с помощью объекта cin.




Sample Input:

10 12 5

Sample Output:

24.54

*/

#include <cmath>
#include <iomanip>
#include <iostream>

double triangle_sq(int a, int b, int c) {
    double p = (double)(a + b + c) / 2;

    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double square = 0.0;
    int a, b, c = {0};
    std::cin >> a >> b >> c;
    square = triangle_sq(a, b, c);

    std::cout << std::fixed << std::setprecision(2) << square << std::endl;

    return 0;
}