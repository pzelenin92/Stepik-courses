/*

Подвиг 3. Объявите в программе два пространства имен: triangle и rectangle. В пространстве triangle пропишите функцию с
именем perimetr, которая вычисляет периметр треугольника с целочисленными сторонами a, b, c (формула: a+b+c).
Вычисленный результат (целочисленный) возвращается этой функцией. По аналогии определите в пространстве имен rectangle
функцию с таким же именем perimetr, которая вычисляет периметр прямоугольника с целочисленными сторонами width и height
(формула: 2*(width+height)). Вычисленный результат (целочисленный) возвращается этой функцией.

В функции main прочитайте из входного потока три целых числа a0, a1, a2, записанных в одну строчку через пробел.
Вызовите функцию perimetr из пространства triangle с аргументами a0, a1, a2 и функцию perimetr из пространства rectangle
с аргументами a0, a1. Выведите в консоль в одну строчку через пробел два вычисленных периметра: сначала для
треугольника, а затем для прямоугольника.

Sample Input:

3 4 5

Sample Output:

12 14

*/

#include <iostream>

namespace triangle {
int perimetr(int a, int b, int c) { return a + b + c; }
}  // namespace triangle

namespace rectangle {
int perimetr(int width, int height) { return 2 * (width + height); }
}  // namespace rectangle

int main() {
    int a0, a1, a2 = {0};
    std::cin >> a0 >> a1 >> a2;

    int t_p = triangle::perimetr(a0, a1, a2);
    int r_p = rectangle::perimetr(a0, a1);

    std::cout << t_p << " " << r_p << std::endl;

    return 0;
}