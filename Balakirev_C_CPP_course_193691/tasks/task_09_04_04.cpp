/*

Подвиг 4. Объявите в программе пространство имен math, в котором пропишите функцию сравнения двух целочисленных массивов
типа short со следующей сигнатурой:

int ar_compare(const short* a1, size_t len_a1, const short* a2, size_t len_a2);

Функция возвращает 1, если переданные массивы a1 и a2 равны, и 0 в противном случае. Массивы считаются равными, если
равны их длины и попарно все  элементы массивов a1 и a2 между собой. То есть, первый элемент массива a1 должен быть
равен первому элементу массива a2 и так до конца для всех их элементов.

В функции main с помощью функции ar_compare сравните между собой два следующих массива:

short ar1[] = {1, 2, 3, 4, 5};
short ar2[] = {1, 2, 5, 3, 4};

Результат сравнения сохраните в целочисленной переменной res.

P. S. В консоль ничего выводить не нужно.

*/

#include <iostream>

namespace math {
int ar_compare(const short* a1, size_t len_a1, const short* a2, size_t len_a2) {
    int result = 1;
    if (len_a1 == len_a2) {
        for (size_t i = 0; i < len_a1; i++) {
            if (a1[i] != a2[i]) {
                result = 0;
                break;
            }
        }
    } else {
        result = 0;
    }

    return result;
}
}  // namespace math

int main() {
    short ar1[] = {1, 2, 3, 4, 5};
    short ar2[] = {1, 2, 5, 3, 4};

    size_t len_a1 = sizeof(ar1) / sizeof(ar1[0]);
    size_t len_a2 = sizeof(ar2) / sizeof(ar2[0]);

    std::cout << len_a1 << " " << len_a2 << std::endl;

    int res = math::ar_compare(ar1, len_a1, ar2, len_a2);

    std::cout << res << std::endl;

    return 0;
}