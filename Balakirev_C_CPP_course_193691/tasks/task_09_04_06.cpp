/*
Подвиг 6 (с повторением). Объявите в программе пространство имен array_alg. В этом пространстве объявите функцию
filter_int, которая должна оставлять только определенные значения в массиве. Эта функция должна иметь следующую
сигнатуру:

size_t filter_int(int* ar, size_t len_ar, PTR_FILTER_FUNC func);

Здесь ar - обрабатываемый массив; len_ar - начальная длина массива ar; func - указатель на функцию для отбора
(фильтрации) значений массива ar. Функция filter_int должна возвращать результирующую длину массива ar (количество
оставшихся в нем элементов).

Указатель PTR_FILTER_FUNC должен быть определен в пространстве имен array_alg для функций с сигнатурой:

int <имя_функции> (int);

Если такая функция, вызванная для определенного элемента массива, возвращает истину (не нулевое значение), то это
значение остается в массиве, а иначе - удаляется. При удалении размер массива len_ar также должен уменьшаться.

В пространстве имен array_alg объявите еще одно пространство имен (вложенное) с именем filter_func и объявите в нем
функцию с именем even для отбора четных значений массива (четные значения должны оставаться).

В функции main прочитайте из входного потока целые числа, записанные в одну строчку через пробел, в количестве не
более 20. Все эти значения занесите в массив (по порядку) и отфильтруйте его с помощью функции filter_int с передачей в
качестве критерия фильтрации функцию even. То есть, в массиве должны оставаться только четные числа или никаких, если
четных чисел нет. Выведите в консоль отфильтрованные значения в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.4.6

Sample Input:
5 34 10 4 7 8 3 2

Sample Output:
34 10 4 8 2

*/

#include <iostream>

void print_ar(int* ar, size_t len_ar) {
    for (size_t i = 0; i < len_ar; i++) {
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}

namespace array_alg {
namespace filter_func {
int even(int x) {
    if (x < 0) {
        x *= -1;
    }
    return x % 2 == 0;
}
}  // namespace filter_func

typedef int (*PTR_FILTER_FUNC)(int);

size_t filter_int(int* ar, size_t len_ar, PTR_FILTER_FUNC func) {
    size_t i = 0;
    while (i < len_ar) {
        if (!func(ar[i])) {
            len_ar = len_ar - 1;
            for (size_t j = i; j < len_ar; j++) {
                ar[j] = ar[j + 1];
            }
            i--;
        }
        i++;
    }
    return len_ar;
}

}  // namespace array_alg

int main() {
    int ar[20];

    size_t len_ar = 0;
    while (std::cin >> ar[len_ar]) {
        len_ar++;
    }

    print_ar(ar, len_ar);

    len_ar = array_alg::filter_int(ar, len_ar, array_alg::filter_func::even);

    print_ar(ar, len_ar);

    return 0;
}