/*

Подвиг 5 (с повторением). Объявите в программе пространство имен array_alg. В этом пространстве объявите функцию
sorted_int со следующей сигнатурой:

void sorted_int(int* ar, size_t len_ar, TYPE_SORT type);

Здесь ar - сортируемый массив; len_ar - число первых сортируемых элементов массива ar; type - тип сортировки (по
возрастанию или убыванию).

Тип сортировки TYPE_SORT определяется в том же пространстве имен array_alg как перечисление с двумя константами:

    sort_asc - сортировка по возрастанию;
    sort_desc - сортировка по убыванию.

В функции main прочитайте из входного потока целые числа, записанные в одну строчку через пробел, в количестве не
более 20. Все эти значения занесите в массив (по порядку) и отсортируйте массив по убыванию с помощью функции
sorted_int. Выведите в консоль отсортированные значения в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.4.5

Sample Input:

45 324 645 324 2 -10 11 0 -54 2

Sample Output:

645 324 324 45 11 2 2 0 -10 -54



*/

#include <iostream>

void print_ar(int* ar, size_t len_ar) {
    for (size_t i = 0; i < len_ar; i++) {
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}

namespace array_alg {
typedef enum { sort_asc, sort_desc } TYPE_SORT;

void swap(int* ar, size_t i, size_t j) {
    int tmp = ar[j];
    ar[j] = ar[i];
    ar[i] = tmp;
}

void sorted_int(int* ar, size_t len_ar, TYPE_SORT type) {
    for (size_t i = 0; i < len_ar; i++) {
        for (size_t j = i + 1; j < len_ar; j++) {
            if (type == sort_asc && ar[i] > ar[j]) {
                swap(ar, i, j);

            } else if (type == sort_desc && ar[i] < ar[j]) {
                swap(ar, i, j);
            }
        }
    }
}

}  // namespace array_alg

int main() {
    int ar[20];

    size_t len_ar = 0;
    while (std::cin >> ar[len_ar]) {
        len_ar++;
    }

    print_ar(ar, len_ar);

    array_alg::sorted_int(ar, len_ar, array_alg::sort_asc);

    print_ar(ar, len_ar);

    return 0;
}